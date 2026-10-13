/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 13:51:01 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/18 14:27:17 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	nb++;
	return (ft_find_next_prime (nb));
}
/*
#include <stdio.h>

int main(){
    printf("peime: %d\n", ft_find_next_prime(7));
    printf("next prime: %d\n", ft_find_next_prime(8));
    return 0;
}
*/
