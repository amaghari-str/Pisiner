/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 12:58:17 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:34:03 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	if (size <= a)
		return (size + b);
	i = 0;
	while (src[i] != '\0' && a + i + 1 < size)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}
/*
#include <stdio.h>
 
 int main(){	
 	char str[] = "text test";
	char arr[30] = "from ferst";
	printf("%u\n", ft_strlcat(arr, str, 30));
	printf("%s\n", arr);
	return 0;
}
*/
