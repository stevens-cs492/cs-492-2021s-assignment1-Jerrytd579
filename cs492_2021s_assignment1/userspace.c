#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
int main()
{
	/*  Testing helloWorld system call
	long int amma = syscall(548); 
	printf("System call sys_hello returned %ld\n", amma);
	return 0;
	*/
	
	/* Testing jerry_syscall, section e */
	char testString[] = "xxxxx";
	printf("Original string: %s\n", testString);	
	long int amma = syscall(549, testString);
	
	printf("Running jerry_syscall turns the original string into %s and returns %i\n", testString, amma);

	return 0;
}
