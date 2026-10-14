/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:56:12 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/14 17:06:57 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("strcmp:\n");
	printf("%d\n", ft_strcmp("abc", "abc"));
	printf("%d\n", ft_strcmp("abc", "abd"));
	printf("%d\n", ft_strcmp("abd", "abc"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("abc", ""));
	return (0);
}
*/
