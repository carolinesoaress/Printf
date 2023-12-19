/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carol <carol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:22:54 by carol             #+#    #+#             */
/*   Updated: 2023/12/19 11:18:05 by carol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_print_args(const char *string, int i, va_list args)
{
	int	ret;

	if (string[i + 1] == 'd' || string[i + 1] == 'i')
		ret = ft_putnbr(va_arg(args, int));
	else if (string[i + 1] == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (string[i + 1] == 's')
		ret = ft_putstr(va_arg(args, char *));
	else if (string[i + 1] == '%')
		ret = ft_putchar('%');
	else if (string[i + 1] == 'x')
		ret = ft_puthex(va_arg(args, int));
	return (ret);
}

int	ft_printf(const char *string, ...)
{
	va_list		args;
	int			i;
	int			n;

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

int main()
{
    int number = 79849;
    int ret;
    ret = ft_printf("%x\n", number);
    printf("total minha: %d\n", ret);
    ret = printf("%x\n", number);
    printf("total original: %d\n", ret);
    return 0;
}