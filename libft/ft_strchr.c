/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:27:02 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:30:21 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	d;
	int		i;

	i = 0;
	d = (char)c;
	if (d == '\0')
		return ((char *)str);
	while (str[i])
	{
		if (str[i] == d)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
