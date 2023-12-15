#include "ft_printf.h"
#include <stdio.h>


int ft_print_args(const char *string, int i, va_list args)
{
  if (string[i + 1] == 'd' || string[i + 1] == 'i')
    ft_putnbr(va_arg(args, int));
  else if (string[i + 1] == 'c')
    ft_putchar(va_arg(args, int));
  else if (string[i + 1] == 's')
    ft_putstr(va_arg(args, char *));
  else if (string[i + 1] == '%')
    ft_putchar('%');
  return (0);
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
			ft_print_args(string, i, args);
			i++;
      //n++;
		}
		else
		  ft_putchar(string[i]);
    i++;
  }
    
  return (i);
}

int main(void)
{
    int n = 4;
    char l = 'c';
    char *str = "Batata";

    int total, original;

    total = ft_printf("a str %s %%\n",str);
    ft_printf("%d\n", total);

    original = printf("a str %s %%\n",str);
    printf("original: %d\n", original);  

    return (0);
}