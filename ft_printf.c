/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carol <carol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:22:54 by carol             #+#    #+#             */
/*   Updated: 2024/01/08 13:00:33 by carol            ###   ########.fr       */
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
	else if (string[i + 1] == 'u')
		ret = ft_putnbase(va_arg(args, unsigned int), DECIMAL_BASE);
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
	va_end(args);
	return (n);
}

int main()
{
	unsigned int i = 42;
	int ret;
	
	ret = printf("%u\n",i);
	printf("%d\n", ret);
	
	ret = ft_printf("%u\n",i);
	ft_printf("%d\n", ret);
	return 0;
}