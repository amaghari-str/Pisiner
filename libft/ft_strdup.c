/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 14:23:28 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:31:15 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*p;

	p = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (p == NULL)
		return (NULL);
	ft_strcpy(p, src);
	return (p);
}
/*
#include <stdio.h>
int main(){
	char arr[] = "is copy";
	printf("%s\n", ft_strdup(arr));
	return 0;
}
*/
