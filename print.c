#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print(char *string, ... )
{
  // the number of arguments to be expected is equal to the number of 
  // placeholder string chars as returns by strlen()
  int num_args = strlen(string);
  int x, i;
  va_list args;
  va_start(args, string);
  
  for (i = 0; i < num_args; i++)
  {
    if (string[i] == '%' && string[i + 1] == 'd')
    {
        x = va_arg(args, int);
        printf("%d", x);
        i++;
    }
    else
        printf("%c", string[i]);
  }
}

int main(void)
{
    int n = 4;
    int m = 3; 
   
    print("O num %d é top e o %d é ok\n", n, m);

    return (0);
}