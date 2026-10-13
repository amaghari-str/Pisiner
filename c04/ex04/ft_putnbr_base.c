/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:24:19 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/17 14:25:25 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (!base || base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_len;

	if (!is_valid_base(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	ft_putchar(base[n % base_len]);
}
/*
int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');

	ft_putnbr_base(42, "01");
	ft_putchar('\n');

	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');

	ft_putnbr_base(42, "poneyvif");
	ft_putchar('\n');

	ft_putnbr_base(-42, "0123456789");
	ft_putchar('\n');

	ft_putnbr_base(-42, "01");
	ft_putchar('\n');

	 Invalid bases — nothing should be printed
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
