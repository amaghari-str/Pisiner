/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:05:03 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/23 15:47:46 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
/*
typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
}	t_stock_str;
*/
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*p;

	p = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		p[i].size = ft_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = malloc(ft_strlen(av[i]) + 1);
		ft_strcpy(p[i].copy, av[i]);
		i++;
	}
	p[ac].str = NULL;
	return (p);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = ft_strs_to_tab(ac, av);
	if (!tab)
		return (1);

	i = 0;
	while (i < ac)
	{
		printf("Element %d:\n", i);
		printf("size = %d\n", tab[i].size);
		printf("str = %s\n", tab[i].str);
		printf("copy = %s\n", tab[i].copy);
		printf("\n");
		i++;
	}

	i = 0;
	while (i < ac)
	{
		free(tab[i].copy);
		i++;
	}
	free(tab);

	return (0);
}
*/
