cmd_arch/x86/lib/lib-ksyms.o := objdump -h arch/x86/lib/lib.a | sed -ne '/___ksymtab/{s/.*+/EXTERN(/;s/ .*/)/;p}' >arch/x86/lib/.lib-ksyms.o.lds; rm -f arch/x86/lib/.lib_exports.o; ar rcsD arch/x86/lib/.lib_exports.o; ld -m elf_x86_64   -r -o arch/x86/lib/lib-ksyms.o -T arch/x86/lib/.lib-ksyms.o.lds arch/x86/lib/.lib_exports.o; rm arch/x86/lib/.lib_exports.o arch/x86/lib/.lib-ksyms.o.lds