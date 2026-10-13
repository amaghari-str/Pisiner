/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:26:16 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/06 20:16:12 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[100000];
	int	i;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[size - 1 - i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
