/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:23:27 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/20 18:27:59 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*p;
	int	i;

	i = 0;
	p = (unsigned char *)dest;
	while (i < n)
	{
		*p = '\0';
		i++;
	}
}
