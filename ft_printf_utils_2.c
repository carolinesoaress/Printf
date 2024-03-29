/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagoncal <cagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:17:25 by carol             #+#    #+#             */
/*   Updated: 2024/01/10 17:25:06 by cagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numbers(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		len = 1;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbase(long long n, char *base)
{
	int	bytes;
	int	base_size;

	bytes = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		bytes += ft_putchar('-');
		n = -n;
	}
	if (n >= base_size)
		bytes += ft_putnbase((n / base_size), base);
	bytes += ft_putchar(base[n % base_size]);
	return (bytes);
}

int	ft_putptr(unsigned long n, char *base)
{
	int	bytes;
	int	base_size;

	if (n == 0)
		return (ft_putstr("(nil)"));
	bytes = 0;
	base_size = ft_strlen(base);
	if (n >= (unsigned long)base_size)
		bytes += ft_putptr((n / base_size), base);
	else
		bytes += ft_putstr("0x");
	bytes += ft_putchar(base[n % base_size]);
	return (bytes);
}
