/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:07:42 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 19:09:57 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *cont, const void *data, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	int					i;

	if (n == 0)
		return (0);
	s1 = (const unsigned char *)cont;
	s2 = (const unsigned char *)data;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
