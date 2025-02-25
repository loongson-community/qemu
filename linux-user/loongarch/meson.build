vdso_64_inc = gen_vdso.process('vdso-64.so',
                            extra_args: ['-r', '__vdso_rt_sigreturn'])

linux_user_ss.add(when: 'TARGET_ABI32', if_false: vdso_64_inc)

syscall_nr_generators += {
  'loongarch': generator(sh,
                      arguments: [ meson.current_source_dir() / 'syscallhdr.sh', '@INPUT@', '@OUTPUT@', '@EXTRA_ARGS@' ],
                      output: '@BASENAME@_nr.h')
}
