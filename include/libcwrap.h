/* glibc bindings for target ABI version glibc 2.11.1 */
#if !defined (__LIBC_CUSTOM_BINDINGS_H__)

#  if !defined (__OBJC__) && !defined (__ASSEMBLER__)
#    if defined (__cplusplus)
extern "C" {
#    endif

/* Symbols redirected to earlier glibc versions */
__asm__(".symver clock_getres, clock_getres@GLIBC_2.4");
__asm__(".symver sys_nerr, sys_nerr@GLIBC_2.4");
__asm__(".symver clock_settime, clock_settime@GLIBC_2.4");
__asm__(".symver fmemopen, fmemopen@GLIBC_2.4");
__asm__(".symver sys_errlist, sys_errlist@GLIBC_2.4");
__asm__(".symver clock_getcpuclockid, clock_getcpuclockid@GLIBC_2.4");
__asm__(".symver _sys_errlist, _sys_errlist@GLIBC_2.4");
__asm__(".symver posix_spawn, posix_spawn@GLIBC_2.4");
__asm__(".symver lgamma, lgamma@GLIBC_2.4");
__asm__(".symver posix_spawnp, posix_spawnp@GLIBC_2.4");
__asm__(".symver clock_gettime, clock_gettime@GLIBC_2.4");
__asm__(".symver _sys_nerr, _sys_nerr@GLIBC_2.4");
__asm__(".symver clock_nanosleep, clock_nanosleep@GLIBC_2.4");
__asm__(".symver lgammaf, lgammaf@GLIBC_2.4");
__asm__(".symver lgammal, lgammal@GLIBC_2.4");

/* Symbols introduced in newer glibc versions, which must not be used */
__asm__(".symver pthread_mutex_consistent, pthread_mutex_consistent@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver __yn_finite, __yn_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __atan2_finite, __atan2_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver setns, setns@GLIBC_DONT_USE_THIS_VERSION_2.14");
__asm__(".symver __atanhf_finite, __atanhf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __gamma_r_finite, __gamma_r_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver recvmmsg, recvmmsg@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver __y1_finite, __y1_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver c32rtomb, c32rtomb@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __ynf_finite, __ynf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __exp2f_finite, __exp2f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __fdelt_warn, __fdelt_warn@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver prlimit64, prlimit64@GLIBC_DONT_USE_THIS_VERSION_2.13");
__asm__(".symver __signgam, __signgam@GLIBC_DONT_USE_THIS_VERSION_2.23");
__asm__(".symver __acos_finite, __acos_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __logf_finite, __logf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver fts64_set, fts64_set@GLIBC_DONT_USE_THIS_VERSION_2.23");
__asm__(".symver __log_finite, __log_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver fts64_open, fts64_open@GLIBC_DONT_USE_THIS_VERSION_2.23");
__asm__(".symver __acosf_finite, __acosf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __remainderf_finite, __remainderf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver scandirat64, scandirat64@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver pthread_setattr_default_np, pthread_setattr_default_np@GLIBC_DONT_USE_THIS_VERSION_2.18");
__asm__(".symver __log10f_finite, __log10f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __hypot_finite, __hypot_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __sqrtf_finite, __sqrtf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __gammaf_r_finite, __gammaf_r_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __acosh_finite, __acosh_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver process_vm_writev, process_vm_writev@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __j0f_finite, __j0f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __coshf_finite, __coshf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __asinf_finite, __asinf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver open_by_handle_at, open_by_handle_at@GLIBC_DONT_USE_THIS_VERSION_2.14");
__asm__(".symver __cxa_thread_atexit_impl, __cxa_thread_atexit_impl@GLIBC_DONT_USE_THIS_VERSION_2.18");
__asm__(".symver __j1f_finite, __j1f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __remainder_finite, __remainder_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __sqrt_finite, __sqrt_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __atan2f_finite, __atan2f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __j0_finite, __j0_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __jn_finite, __jn_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver fts64_close, fts64_close@GLIBC_DONT_USE_THIS_VERSION_2.23");
__asm__(".symver process_vm_readv, process_vm_readv@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __exp10f_finite, __exp10f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __j1_finite, __j1_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __exp10_finite, __exp10_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __exp2_finite, __exp2_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __acoshf_finite, __acoshf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver getauxval, getauxval@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __pow_finite, __pow_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __scalb_finite, __scalb_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver pthread_getattr_default_np, pthread_getattr_default_np@GLIBC_DONT_USE_THIS_VERSION_2.18");
__asm__(".symver __lgamma_r_finite, __lgamma_r_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __jnf_finite, __jnf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver fanotify_mark, fanotify_mark@GLIBC_DONT_USE_THIS_VERSION_2.13");
__asm__(".symver __lgammaf_r_finite, __lgammaf_r_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __issignalingf, __issignalingf@GLIBC_DONT_USE_THIS_VERSION_2.18");
__asm__(".symver pthread_getname_np, pthread_getname_np@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver __atanh_finite, __atanh_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver scandirat, scandirat@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __log10_finite, __log10_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver fts64_read, fts64_read@GLIBC_DONT_USE_THIS_VERSION_2.23");
__asm__(".symver clock_adjtime, clock_adjtime@GLIBC_DONT_USE_THIS_VERSION_2.14");
__asm__(".symver __fdelt_chk, __fdelt_chk@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver aligned_alloc, aligned_alloc@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __log2_finite, __log2_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __issignaling, __issignaling@GLIBC_DONT_USE_THIS_VERSION_2.18");
__asm__(".symver __fmod_finite, __fmod_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver mbrtoc16, mbrtoc16@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver sendmmsg, sendmmsg@GLIBC_DONT_USE_THIS_VERSION_2.14");
__asm__(".symver mbrtoc32, mbrtoc32@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __cosh_finite, __cosh_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver timespec_get, timespec_get@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __fmodf_finite, __fmodf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver syncfs, syncfs@GLIBC_DONT_USE_THIS_VERSION_2.14");
__asm__(".symver __asin_finite, __asin_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver pthread_setname_np, pthread_setname_np@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver prlimit, prlimit@GLIBC_DONT_USE_THIS_VERSION_2.13");
__asm__(".symver fanotify_init, fanotify_init@GLIBC_DONT_USE_THIS_VERSION_2.13");
__asm__(".symver __log2f_finite, __log2f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __sinhf_finite, __sinhf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver name_to_handle_at, name_to_handle_at@GLIBC_DONT_USE_THIS_VERSION_2.14");
__asm__(".symver __y0f_finite, __y0f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __y1f_finite, __y1f_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __scalbf_finite, __scalbf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver pthread_mutexattr_setrobust, pthread_mutexattr_setrobust@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver secure_getenv, secure_getenv@GLIBC_DONT_USE_THIS_VERSION_2.17");
__asm__(".symver __sinh_finite, __sinh_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver fts64_children, fts64_children@GLIBC_DONT_USE_THIS_VERSION_2.23");
__asm__(".symver __poll_chk, __poll_chk@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __ppoll_chk, __ppoll_chk@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver c16rtomb, c16rtomb@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver __exp_finite, __exp_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver ntp_gettimex, ntp_gettimex@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver __hypotf_finite, __hypotf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __powf_finite, __powf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __expf_finite, __expf_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");
__asm__(".symver __getauxval, __getauxval@GLIBC_DONT_USE_THIS_VERSION_2.16");
__asm__(".symver pthread_mutexattr_getrobust, pthread_mutexattr_getrobust@GLIBC_DONT_USE_THIS_VERSION_2.12");
__asm__(".symver __y0_finite, __y0_finite@GLIBC_DONT_USE_THIS_VERSION_2.15");

#    if defined (__cplusplus)
}
#    endif
#  endif /* !defined (__OBJC__) && !defined (__ASSEMBLER__) */
#endif
