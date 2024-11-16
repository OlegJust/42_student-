#include "ft_printf.h"

int ft_putchar(char c) {
    return write(1, &c, 1);
}

int ft_putstr(char *str) {
    int i = 0;

    if (!str)
        return write(1, "(null)", 6);
    while (str[i])
        i += ft_putchar(str[i]);
    return i;
}

int ft_putnbr(int n) {
    // char buffer[12];
    int i = 0;

    if (n == -2147483648)
        return ft_putstr("-2147483648");
    if (n < 0) {
        i += ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        i += ft_putnbr(n / 10);
    return i + ft_putchar(n % 10 + '0');
}
