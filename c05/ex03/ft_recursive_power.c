/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 18:10:01 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/15 18:11:31 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	power--;
	return (nb * ft_recursive_power(nb, power));
}
/*
#include <stdio.h>

int main() {
    int nb = 6;
    int power = 6;
    int result = ft_recursive_power(nb, power);
    printf("Result: %d\n", result);
    return 0;
}
*/
