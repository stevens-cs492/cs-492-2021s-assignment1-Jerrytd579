#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>


int init_module(void){
	/* Inspired from https://tldp.org/LDP/IKmpg/2.6/html/x121.html */
	printk(KERN_INFO "Hello world from Jerry Cheng (10437904)\n");
	return 0;
}

void cleanup_module(void){
	printk(KERN_INFO "PID: %i; Name: %s\n",current->pid, current->comm);
	return;
}
