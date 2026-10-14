/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:59:30 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/14 16:59:31 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	*ft_strcpy(char *dest, char *src)
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

size_t	ft_strlen(char *str)
	{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
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
