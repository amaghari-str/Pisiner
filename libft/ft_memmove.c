/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:05:20 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:19:21 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t value)
{
	size_t			i;
	unsigned char		*p;
	const unsigned char		*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == src || value == 0)
		return (dest);
	if (p < s)
	{
		i = 0;
		while (i < value)
		{
			p[i] = s[i];
			i++;
		}
	}
	else
	{
		i = value;
		while (i > 0)
		{
			i--;
			p[i] = s[i];
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int main (void){
    char arr[] = "i do know the way";
    int suu[] = {3, 6, 3, 7, 8, 454, 453, 21};
    ft_memmove(arr + 1, arr, 16);
    ft_memmove(suu + 1, suu, 7);
    printf("%s\n", arr);
    for (int i = 0; i < 7; i++){
        printf("%d\n", suu[i]);
    }
    return 0;
}
*/
