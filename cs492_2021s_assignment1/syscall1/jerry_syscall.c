#include <linux/kernel.h>
#include <linux/string.h>

asmlinkage long jerry_syscall(char input[]){
	int count = 0;
	int i;

	if (strlen(input) > 128){
		return -1;
	}

	for(i = 0; i < strlen(input); i++){
		if(input[i] == 'x'){
			input[i] = 'y';
			count += 1;
		}
	}

	return count;
}
