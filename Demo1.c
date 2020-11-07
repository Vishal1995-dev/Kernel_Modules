//Used for module functionality
#include<linux/module.h>
#include<linux/kernel.h>

//Gets called when module gets loaded
int init_module(void)
{
	//Function to print in kernel log file
	printk(KERN_INFO "Vishal's module loaded\n");
	return 0;
}

//Gets called when module unloaded
void cleanup_module(void)
{
	printk(KERN_INFO "Vishal's module unloaded\n");
}
