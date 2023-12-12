#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int     ft_printf(const char *string, ...);
void    ft_putchar(char c);
int     ft_strlen(const char *str);
void    ft_putnbr(int n);

#endif