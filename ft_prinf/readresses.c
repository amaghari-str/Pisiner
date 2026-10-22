/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readresses.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:09:50 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/22 17:54:41 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft.h"

int	ft_putnbr_pos(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 10)
		count += ft_putnbr_pos(nb / 10);
	ft_putchar_fd((nb % 10) + '0', 1);
	return (count);
}

static int	ft_putchar_arg(va_list arg)
{
	char	i;

	i = (char) va_arg(arg, int);
	ft_putchar_fd(i, 1);
	return (1);
}

static int	ft_putstr_arg(va_list arg)
{
	char	*str;

	str = va_arg(arg, char*);
	ft_putstr_fd(str, 1);
	return ((int)ft_strlen(str));
}

static int	ft_putnbr_arg(va_list arg)
{
	int	i;

	i = 0;
	i = va_arg(arg, int);
	ft_putnbr_fd(i, 1);
	return (ft_strlen(ft_itoa(i)));
}

static int	ft_put_pos_arg(va_list arg)
{
	int	i;

	i = 0;
	i = ft_putnbr_pos(va_arg(arg, unsigned int));
	return (++i);
}

static int	ft_hexdes_arg(va_list arg)
{
	int	i;

	i = 0;
	i = ft_putnbr_base(va_arg(arg, unsigned long), "0123456789abcdef");
	return i;
}

int	tipe_detector(char type, va_list arg)
{
	if (type == 'c')
		return ft_putchar_arg(arg);
	if (type == 's')
		return ft_putstr_arg(arg);
	if (type == 'd' || type == 'i')
		return ft_putnbr_arg(arg);
	if (type == 'u')
		return ft_put_pos_arg(arg);
	if (type == 'p')
		return ft_hexdes_arg(arg);
	if (type == 'x')
		return ft_hexdes_arg(arg);
	if (type == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return 0;
}
