#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *string, ...)
{
  int num_args = ft_strlen(string);
  int x, i, n;
  va_list args;
  va_start(args, string);
  
  i = 0;
  n = 0;
  while (i < num_args)
  {
    if (string[i] == '%' && string[i + 1] == 'd')
    {
        n++;
        x = va_arg(args, int);
        ft_putnbr(x);
        i++;
    }
    else
        ft_putchar(string[i]);
    i++;
  }
  return (i - n);
}

int main(void)
{
    int n = 4;
    int m = 3; 

    int total, original;

    total = ft_printf("O num %d é legal o %d é ok\n", n, m);
    ft_printf("%d\n", total);

    original = printf("O num %d é legal o %d é ok\n", n, m);
    printf("original: %d\n", original);  

    return (0);
}