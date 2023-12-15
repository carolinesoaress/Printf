#include "ft_printf.h"

int   ft_putchar(char c)
{
    write(1, &c, 1);
	return (1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_putnbr(int n)
{
	unsigned int	number;  
	int				len;
	int				num;

	num = n;
	number = n;
	len = 0;
	if (n < 0)
	{
		ft_putchar('-');
		number = -n;
		num = -num;
	}
	if (number > 9) 
		ft_putnbr(number / 10);

	ft_putchar(number % 10 + '0');
	if(num == 0)
		len = 1;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return(len);
}

char	*ft_strrchr(const char *str, int ch)
{
	const char	*last_ch;

	ch = ch % 256;
	last_ch = ((void *)0);
	while (*str)
	{
		if (*str == ch)
			last_ch = str;
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return ((char *)last_ch);
}

int	ft_putstr(char *s)
{
	int	idx;

	idx = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	idx = ft_strlen(s);
	write(1, s, idx);
	return (idx);
}
