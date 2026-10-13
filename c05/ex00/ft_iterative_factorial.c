/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 17:47:29 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/18 16:48:38 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	count;

	res = 1;
	count = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (count <= nb)
	{
		res *= count;
		count++;
	}
	return (res);
}
/*
#include <stdio.h>

int main(){
	printf("%d\n", ft_iterative_factorial(0));
	return 0;
}
*/
