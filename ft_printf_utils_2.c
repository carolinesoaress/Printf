/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carol <carol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:17:25 by carol             #+#    #+#             */
/*   Updated: 2023/12/19 11:12:31 by carol            ###   ########.fr       */
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

int	ft_puthex(int number)
{
	char	buffer[32];
	int		modulo;
	int		ret;
	int		i;
	int		index;

	ret = 0;
	i = 0;
	index = 0;
	while (number > 0)
	{
		modulo = number % 16;
		number /= 16;
		if (modulo < 10)
			buffer[index++] = modulo + '0';
		else if (modulo > 9 || modulo < 16)
			buffer[index++] = 'a' + (modulo - 10);
	}
	i = index - 1;
	while (i >= 0)
	{
		ft_putchar (buffer[i--]);
		ret++;
	}
	return (ret);
}
