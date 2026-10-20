/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:00:23 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 20:02:06 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	p = malloc(len + 1);
	ft_strncpy(p, &s[start], len);
	return (p);
}
/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";

    printf("%s\n", ft_substr(str, 0, 5));  // Hello
    printf("%s\n", ft_substr(str, 7, 5));  // World
    printf("%s\n", ft_substr(str, 0, 13)); // Hello, World!
    printf("%s\n", ft_substr(str, 7, 0));  // Пустая строка

    return 0;
}
*/
