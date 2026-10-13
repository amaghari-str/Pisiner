/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:58:05 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/18 13:43:32 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	to_power;
	int	res;

	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	res = 1;
	to_power = 0;
	while (to_power < power)
	{
		res *= nb;
		to_power++;
	}
	return (res);
}
/*
#include <stdio.h>

int main() {
    int nb = 6;
    int power = 6;
    int result = ft_iterative_power(nb, power);
    printf("Result: %d\n", result);
    return 0;
}
*/
