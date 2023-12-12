#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *string, ...)
{
  int num_args = ft_strlen(string);
  int x, i;
  va_list args;
  va_start(args, string);
  
  i = 0;
  while (i < num_args)
  {
    if (string[i] == '%' && string[i + 1] == 'd')
    {
        x = va_arg(args, int);
        ft_putnbr(x);
        i++;
    }
    else
        ft_putchar(string[i]);
    i++;
  }
}

int main(void)
{
    int n = 4;
    int m = 3; 
   
    ft_printf("O num %d é top e o %d é ok\n", n, m);

    return (0);
}