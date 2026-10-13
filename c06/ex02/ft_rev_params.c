/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:49:33 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/15 16:51:31 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	argc--;
	while (argc > 0)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			write (1, &argv[argc][i], 1);
			i++;
		}
		write (1, "\n", 1);
		argc--;
	}
	return (0);
}
