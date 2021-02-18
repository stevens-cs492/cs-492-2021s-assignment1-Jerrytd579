#include <linux/kernal.h>

asmlinkage long sys_hello(void)
{
	printk("Hello world
