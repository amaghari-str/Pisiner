/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 18:38:48 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/15 14:21:17 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "example text";
	char arr[20] = "";
	printf("%d\n", ft_strlcpy(arr, str, 5));
	printf("%s\n", arr);
	return (0);
}
*/
