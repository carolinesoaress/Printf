#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int     ft_printf(const char *string, ...);
int		ft_putchar(char c);
int     ft_strlen(const char *str);
int		ft_putnbr(int n);
char	*ft_strrchr(const char *str, int ch);
int	    ft_putstr(char *s);

#endif