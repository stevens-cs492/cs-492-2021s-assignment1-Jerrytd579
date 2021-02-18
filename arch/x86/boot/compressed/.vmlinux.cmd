cmd_arch/x86/boot/compressed/vmlinux := 	for obj in arch/x86/boot/compressed/head_64.o arch/x86/boot/compressed/misc.o arch/x86/boot/compressed/string.o arch/x86/boot/compressed/cmdline.o arch/x86/boot/compressed/error.o arch/x86/boot/compressed/piggy.o arch/x86/boot/compressed/cpuflags.o arch/x86/boot/compressed/early_serial_console.o; do readelf -S $$obj | grep -qF .rel.local && { echo "error: $$obj has data relocations!" >&2; exit 1; } || true; done
