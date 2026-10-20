/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:31:19 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:07:25 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	i = 0;
	str = (unsigned char *)src;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main (void){
	char arr[] = "hello world";
	char *p =(char *)ft_memchr(arr, 119, 12);
	printf("%s\n", p);
	return 0;
}
*/
