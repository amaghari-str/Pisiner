/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 14:53:26 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/13 17:15:24 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)

{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
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
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include<stdio.h>

int main(){
	char arr[100] = "text from ferst";
	char arr1[] = ",text from second";
	printf("%s\n", ft_strcat(arr, arr1));
	return 0;
}
*/
