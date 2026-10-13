/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 13:18:28 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/13 17:20:27 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *result;

	result = ft_strstr("Hello World!", "World");
	printf("%s\n", result);

	result = ft_strstr("Hello World!", "Hello");
	printf("%s\n", result);

	result = ft_strstr("Hello World!", "xyz");
	printf("%s\n", result);

	result = ft_strstr("Hello World!", "");
	printf("%s\n", result);

	result = ft_strstr("42 School 42", "School");
	printf("%s\n", result);

	return (0);
}
*/
