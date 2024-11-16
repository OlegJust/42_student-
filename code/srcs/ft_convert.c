#include "ft_printf.h"

int ft_put_unsigned(unsigned int n) {
    if (n > 9)
        return ft_put_unsigned(n / 10) + ft_putchar(n % 10 + '0');
    return ft_putchar(n + '0');
}

int ft_puthex(unsigned int n, char format) {
    char *hex = (format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
    if (n >= 16)
        return ft_puthex(n / 16, format) + ft_putchar(hex[n % 16]);
    return ft_putchar(hex[n]);
}
