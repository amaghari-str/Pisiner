/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:05:55 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:21:55 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int a, size_t n)
{
	unsigned char		*p;
	int					i;

	i = 0;
	p = (unsigned char *)b;
	while (i < n)
	{
		p[i] = (unsigned char)a;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>
int main (void){
	char arr[] = "some text .txt";
	char *p = (char *)memset(arr, 'a', 4);
	printf("%s \n", p);
	return 0;
}
*/
