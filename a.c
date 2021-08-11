#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("mmmj_mifs");

static int x = 5;

module_param(x, int, 0);

static int hello_init(void) {
    printk(KERN_ALERT"Starting x = %d\n", x);
    return 0;
}

static void hello_exit(void) {
    printk(KERN_ALERT"Closing x = %d\n", x);
}

module_init(hello_init);
module_exit(hello_exit);
