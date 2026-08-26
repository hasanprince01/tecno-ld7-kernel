#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hasan");
MODULE_DESCRIPTION("Test Kernel Driver");
MODULE_VERSION("1.0");

static int __init my_driver_init(void) {
    printk(KERN_INFO "[+] Driver Connected & Loaded Successfully!\n");
    return 0;
}

static void __exit my_driver_exit(void) {
    printk(KERN_INFO "[+] Driver Unloaded!\n");
}

module_init(my_driver_init);
module_exit(my_driver_exit);
