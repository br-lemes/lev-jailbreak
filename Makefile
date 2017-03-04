
# Dropbear version
DROPBEAR=dropbear-2016.74

all: lev-jailbreak.bin

# Jailbreak
################################################################################

CybUpdate.bin:
	@wget -c http://bit.do/atualizarlev -O CybUpdate.part
	@mv CybUpdate.part $@

CybUpdate: CybUpdate.bin
	@mkdir -p $@
	tar xf $< -C $@

mount:
	@$(MAKE) -s CybUpdate
	@mkdir -p mnt
	@mount | grep -q $(PWD)/mnt || sudo mount -o loop CybUpdate/rootfs.fex mnt

umount:
	@mount | grep -q $(PWD)/mnt && sudo umount mnt || true

bootloader.fex:
	echo 'LOAD|$@|$(shell stat --printf="%s" CybUpdate/$@)|$(shell md5sum CybUpdate/$@ | cut -d ' ' -f1)|6' > CybUpdate/contents

boot.fex:
	echo 'BOOT|$@|$(shell stat --printf="%s" CybUpdate/$@)|$(shell md5sum CybUpdate/$@ | cut -d ' ' -f1)|10' >> CybUpdate/contents

rootfs.fex:
	echo 'ROOT|$@|$(shell stat --printf="%s" CybUpdate/$@)|$(shell md5sum CybUpdate/$@ | cut -d ' ' -f1)|11' >> CybUpdate/contents

src/usr/bin/dropbearmulti:
	@$(MAKE) -s $(DROPBEAR)/dropbearmulti
	@cp $(DROPBEAR)/dropbearmulti $@

mnt/usr/bin/dropbearmulti: src/usr/bin/dropbearmulti
	@$(MAKE) -s mount
	@sudo cp -r src/* mnt

FEX=bootloader.fex boot.fex rootfs.fex

lev-jailbreak.bin: $(wildcard src/*/*/*)
	@$(MAKE) -s mnt/usr/bin/dropbearmulti umount $(FEX)
	@echo tar cjf $@ contents $(FEX)
	@cd CybUpdate && tar cjf ../$@ contents $(FEX)

# Dropbear
################################################################################

$(DROPBEAR).tar.bz2:
	@wget -c https://matt.ucc.asn.au/dropbear/$@ -O $@.part
	@mv $@.part $@

$(DROPBEAR)/configure: $(DROPBEAR).tar.bz2
	tar xf $<
	@touch $@

$(DROPBEAR)/Makefile: $(DROPBEAR)/configure
	@$(MAKE) -s mount
	@cd $(DROPBEAR) && \
		CC='arm-linux-gnueabi-gcc -U_FORTIFY_SOURCE -include $(PWD)/include/libcwrap.h' \
		CFLAGS='-I $(PWD)/include' \
		LDFLAGS='-L $(PWD)/mnt/usr/lib' \
		./configure --prefix=/usr --host=arm-linux-gnueabi

$(DROPBEAR)/dropbearmulti: $(DROPBEAR)/Makefile
	@$(MAKE) -sC $(DROPBEAR) SCPPROGRESS=1 MULTI=1 PROGRAMS="dropbear dbclient dropbearkey dropbearconvert scp"
	@arm-linux-gnueabi-strip --strip-unneeded $@

clean:
	@$(MAKE) -s umount
	rm -rf $(DROPBEAR) CybUpdate lev-jailbreak.bin

.PHONY: clean mount umount $(FEX)
