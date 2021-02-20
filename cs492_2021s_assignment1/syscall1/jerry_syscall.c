#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/syscalls.h>
#include <asm/uaccess.h>

asmlinkage long jerry_syscall(char input[]){
	int count = 0;
	int i;
	char buf[128];
	copy_from_user(buf, input, sizeof(buf));


	if (strlen(buf) > 128){
		return -1;
	}

	for(i = 0; i < strlen(buf); i++){
		if(buf[i] == 'x'){
			buf[i] = 'y';
			count += 1;
		}
	}

	copy_to_user(input, buf, sizeof(buf));
	printk(KERN_INFO "This is the system call: Pid: %d", current->pid);
	return count;
}
