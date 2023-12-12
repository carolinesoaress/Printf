#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

void ft_putnbr(int n)
{
	unsigned int	number;  

	number = n;  

	if (n < 0)  
	{
		ft_putchar('-');
		number = n * -1; 
	}

	if (number > 9) 
		ft_putnbr(number / 10);

	ft_putchar(number % 10 + '0'); 
}