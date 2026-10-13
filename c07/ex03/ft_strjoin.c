/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 14:01:20 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/22 19:11:39 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

int	gamno(char **strs, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		len;

	if (size <= 0)
	{
		p = malloc(1);
		return (p);
	}
	len = gamno(strs, size);
	len += (size - 1) * ft_strlen(sep);
	p = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < size)
	{
		ft_strcat(p, strs[i]);
		if (i < size - 1)
			ft_strcat(p, sep);
		i++;
	}
	return (p);
}
/*
int main (){
	char *strs[] = {"ferst", "second", "one line"};
	char sep[] = ", ";
	printf("%s\n", ft_strjoin(3, strs, sep));
	return 0;
}
*/
