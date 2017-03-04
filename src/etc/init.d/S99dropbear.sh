#!/bin/sh

case "$1" in
  start) /usr/sbin/dropbear -B;;
  # no stop, restart or options that's never used anyway
esac

exit 0
