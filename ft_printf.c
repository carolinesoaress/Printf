#include "ft_printf.h"
#include <stdio.h>


int ft_print_args(const char *string, int i, va_list args)
{
  int ret;
  if (string[i + 1] == 'd' || string[i + 1] == 'i')
    ret = ft_putnbr(va_arg(args, int));
  else if (string[i + 1] == 'c')
    ret = ft_putchar(va_arg(args, int));
  else if (string[i + 1] == 's')
    ret = ft_putstr(va_arg(args, char *));
  else if (string[i + 1] == '%')
    ret = ft_putchar('%');
  return (ret);
}


int	ft_printf(const char *string, ...)
{
  int i,n;
  va_list args;
  
  i = 0;
  n = 0;
  if (!string)
		return (-1);
  va_start(args, string);
  while (string[i])
  {
    if (string[i] == '%' && ft_strrchr("scpdiuxX%", string[i + 1]))
    {
			n += ft_print_args(string, i, args);
			i++;
		}
		else
		  n += ft_putchar(string[i]);
    i++;
  }
    
  return (n);
}

int main(void)
{
    int n = 4;
    char l = 'c';
    char *str = "Batata";

    int total, original;

    total = ft_printf("%i\n",42);
    ft_printf("A função ruim da Carol: %d\n", total);

    original = printf("%i\n",42);
    printf("original: %d\n", original);  

    return (0);
}