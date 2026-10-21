/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readresses.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:09:50 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/21 20:24:44 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putchar_arg(va_list arg)
{
	char	i;

	i = (char) va_arg(arg, int);
	ft_putchar(i);
	return (1);
}

static int	ft_putstr_arg(va_list arg)
{
	ft_putstr_fd(va_arg(arg, char*), 1);
	return (1);
}

static int	ft_putnbr_arg(va_list arg)
{
	ft_putnbr_fd(arg(arg, int), 1);
	return 1;
}

static int	ft_put_pos_arg(va_list arg)
{
	long	i;

	i = ABS arg(arg, long);
	ft_putnbr_fd(i, 1);
}

static int	tipe_detector(char type, va_list arg)
{
	if (type == 'c')
		return ft_putchar_arg(arg);
	if (type == 's')
		return ft_putstr_arg(arg);
	if (type == 'd' || type == 'i')
		return ft_putnbr_arg(arg);
	if (type == 'u')
		return ft_put_pos_arg(arg);
	if (type == "p")
		return ft_spesific_arg(arg);
	if (type == '&')
	{
		ft_putchar('%');
		return (1);
	}
	return 0;
}
