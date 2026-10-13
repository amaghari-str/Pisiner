/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 17:34:05 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/08 17:34:08 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_diget(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_leter(char c)
{
	int	a;

	a = c;
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		return (1);
	}
	return (0);
}

void	lower_case(char *str)
{
	int	i;
	int	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (a >= 65 && a <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	lower_case(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (is_leter(str[i]))
				str[i] -= 32;
			i++;
			continue ;
		}
		if (is_leter(str[i]) && !is_leter(str[i - 1]) && !is_diget(str[i - 1]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
