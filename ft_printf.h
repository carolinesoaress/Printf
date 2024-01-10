/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagoncal <cagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 10:29:19 by carol             #+#    #+#             */
/*   Updated: 2024/01/10 17:23:56 by cagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define DECIMAL_BASE "0123456789"
# define HEXA_UPPER_BASE "0123456789ABCDEF"
# define HEXA_LOWER_BASE "0123456789abcdef"

# include <stdarg.h>
# include <unistd.h>

char	*ft_strrchr(const char *str, int ch);
int		ft_printf(const char *string, ...);
int		ft_putchar(char c);
int		ft_strlen(const char *str);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_numbers(int num);
int		ft_putptr(unsigned long n, char *base);
int		ft_putnbase(long long n, char *base);

#endif