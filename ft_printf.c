/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carol <carol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:22:54 by carol             #+#    #+#             */
/*   Updated: 2024/01/11 18:33:04 by carol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_args(char flag, va_list ptr_arg)
{
	int	bytes;

	bytes = 0;
	if (flag == 'c')
		bytes += ft_putchar(va_arg(ptr_arg, int));
	else if (flag == 's')
		bytes += ft_putstr(va_arg(ptr_arg, char *));
	else if (flag == 'x')
		bytes += ft_putnbase(va_arg(ptr_arg, unsigned int), HEXA_LOWER_BASE);
	else if (flag == 'X')
		bytes += ft_putnbase(va_arg(ptr_arg, unsigned int), HEXA_UPPER_BASE);
	else if (flag == 'u')
		bytes += ft_putnbase(va_arg(ptr_arg, unsigned int), DECIMAL_BASE);
	else if (flag == 'i' || flag == 'd')
		bytes += ft_putnbase(va_arg(ptr_arg, unsigned int), DECIMAL_BASE);
	else if (flag == '%')
		bytes += ft_putchar('%');
	else if (flag == 'p')
		bytes += ft_putptr(va_arg(ptr_arg, unsigned long), HEXA_LOWER_BASE);
	return (bytes);
}

int	ft_printf(const char *string, ...)
{
	va_list		ptr_arg;
	int			i;
	int			bytes;

	if (!string)
		return (-1);
	va_start(ptr_arg, string);
	i = 0;
	bytes = 0;
	while (string[i])
	{
		if (string[i] == '%' && string[i + 1] != '\0')
			bytes += ft_print_args(string[++i], ptr_arg);
		else
			bytes += ft_putchar(string[i]);
		i++;
	}
	va_end(ptr_arg);
	return (bytes);
}
