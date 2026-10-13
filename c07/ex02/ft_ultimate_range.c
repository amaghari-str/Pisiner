/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:57:48 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/20 13:59:07 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;
	int	res;

	i = 0;
	res = max - min;
	p = malloc(sizeof(int) * res);
	if (min >= max || p == NULL)
	{
		*range = NULL;
		return (0);
	}
	while (i < res)
	{
		p[i] = min;
		min++;
		i++;
	}
	*range = p;
	return (i);
}

int main (){
	int *range;
	int i = 0;
	printf("%d\n", ft_ultimate_range(&range, 50, 59));
	while(range[i])
	{
	    printf("%d\n", range[i]);
		i++;
	}
	return 0;
}
