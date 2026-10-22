/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:24:19 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/22 18:11:33 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int		base_len;
	int		i;

	i = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_len)
		i = ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
	i++;
	return (i);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');

	ft_putnbr_base(42, "01");
	ft_putchar('\n');

	ft_putnbr_base(26, "0123456789ABCDEF");
	ft_putchar('\n');

	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');

	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');

	ft_putnbr_base(-42, "01");
	ft_putchar('\n');

	ft_putnbr_base(42, "");
	ft_putchar('\n');

	ft_putnbr_base(42, "0");
	ft_putchar('\n');

	ft_putnbr_base(42, "01234567890");
	ft_putchar('\n');

	ft_putnbr_base(42, "01+");
	ft_putchar('\n');

	ft_putnbr_base(42, "01-");
	ft_putchar('\n');

	return (0);
}
*/
