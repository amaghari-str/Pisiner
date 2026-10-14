/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:51:44 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/14 16:51:50 by amaghari         ###   ########.fr       */
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
