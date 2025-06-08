#include <linux/init.h>   // For module_init and module_exit macros
#include <linux/module.h> // Core header for loading LKMs into the kernel
#include <linux/kernel.h> // Contains types, macros, functions for the kernel

MODULE_LICENSE("GPL");                                // License type -- affects available functionality
MODULE_AUTHOR("Your Name");                           // The author -- visible when you use modinfo
MODULE_DESCRIPTION("A simple Linux hello world LKM"); // Description
MODULE_VERSION("0.1");                                // Version of the module

static int __init hello_init(void)
{
    printk(KERN_INFO "Hello, Kernel World!\n");
    return 0; // Non-zero return means that the module couldn't be loaded.
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye, Kernel World!\n");
}

module_init(hello_init);
module_exit(hello_exit);
