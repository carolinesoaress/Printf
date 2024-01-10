/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagoncal <cagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:22:07 by carol             #+#    #+#             */
/*   Updated: 2024/01/10 18:02:36 by cagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	bytes;

	bytes = write(1, &c, 1);
	return (bytes);
}

int	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

int	ft_putnbr(int n)
{
	unsigned int	number;
	int				len;
	int				num;

	num = n;
	number = n;
	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len += ft_putchar('-');
		number = -n;
		num = -num;
	}
	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
	len += ft_numbers(num);
	return (len);
}

char	*ft_strrchr(const char *str, int ch)
{
	const char	*last_ch;

	ch = ch % 256;
	last_ch = ((void *)0);
	while (*str)
	{
		if (*str == ch)
			last_ch = str;
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return ((char *)last_ch);
}

int	ft_putstr(char *s)
{
	int	s_len;
	int	bytes;

	if (!s)
		return (write(1, "(null)", 6));
	s_len = ft_strlen(s);
	bytes = write(1, s, s_len);
	return (bytes);
}
