/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:05:15 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:11:08 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*v;
	int				i;

	i = 0;
	p = (unsigned char *)dest;
	v = (unsigned char *)src;
	while (i < n)
	{
		p[i] = v[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void){
	char dest[] = "test text";
	char src[] = "main text";
	char *p = memcpy(dest, src, 5);
	printf("%s\n", p);
	return 0;
}
*/
