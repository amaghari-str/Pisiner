/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:50:20 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/13 17:06:54 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	res;

	i = 0;
	res = max - min;
	arr = malloc(sizeof(int) * res);
	if (min >= max || arr == NULL)
		return (NULL);
	while (i < res)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int main(void){
	int *arr = ft_range(40, 50);
	int i = 0;
	while (i < 50 - 40)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
*/
