#include "ft_printf.h"

int ft_putptr(void *ptr) {
    unsigned long long addr = (unsigned long long)ptr;

    if (!ptr)
        return ft_putstr("(nil)");
    return ft_putstr("0x") + ft_puthex(addr, 'x');
}
