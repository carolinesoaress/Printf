/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carol <carol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:17:25 by carol             #+#    #+#             */
/*   Updated: 2023/12/21 07:39:21 by carol            ###   ########.fr       */
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

int	ft_bildbuffer(char *buffer, int index, int number)
{
	int	modulo;

	if (number == 0)
		buffer[index++] = '0';
	while (number > 0)
	{
		modulo = number % 16;
		number /= 16;
		if (modulo < 10)
			buffer[index++] = modulo + '0';
		else
			buffer[index++] = 'a' + (modulo - 10);
	}
	return (index);
}

int	ft_puthex(int number)
{
	char	*buffer;
	int		ret;
	int		index;

	ret = 0;
	index = 0;
	buffer = (char *)malloc(32 * sizeof(char));
	if (!buffer)
		return (-1);
	index = ft_bildbuffer(buffer, index, number);
	ret = index;
	while (index-- > 0)
		ft_putchar (buffer[index]);
	free(buffer);
	return (ret);
}

int	ft_bildbigbuffer(char *buffer, int index, int number)
{
	int	modulo;

	if (number == 0)
		buffer[index++] = '0';
	while (number > 0)
	{
		modulo = number % 16;
		number /= 16;
		if (modulo < 10)
			buffer[index++] = modulo + '0';
		else
			buffer[index++] = 'A' + (modulo - 10);
	}
	return (index);
}

int	ft_putbighex(int number)
{
	char	*buffer;
	int		ret;
	int		index;

	ret = 0;
	index = 0;
	buffer = (char *)malloc(32 * sizeof(char));
	if (!buffer)
		return (-1);
	index = ft_bildbigbuffer(buffer, index, number);
	ret = index;
	while (index-- > 0)
		ft_putchar (buffer[index]);
	free(buffer);
	return (ret);
}
