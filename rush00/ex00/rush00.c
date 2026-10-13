/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emosman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 11:45:38 by emosman           #+#    #+#             */
/*   Updated: 2026/08/08 13:11:41 by emosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	logic(int lines, int rows, int x, int y)
{
	char	c;

	if (lines == 0 && rows == 0)
		c = 'o';
	else if (lines == 0 && rows == x - 1)
		c = 'o';
	else if (lines == y - 1 && rows == 0)
		c = 'o';
	else if (lines == y - 1 && rows == x - 1)
		c = 'o';
	else if (lines == 0 || lines == y - 1)
		c = '-';
	else if (rows == 0 || rows == x - 1)
		c = '|';
	else
		c = ' ';
	ft_putchar(c);
}

void	rush(int x, int y)
{
	int	lines_var;
	int	rows_var;

	lines_var = 0;
	while (lines_var < y)
	{
		rows_var = 0;
		while (rows_var < x)
		{
			logic(lines_var, rows_var, x, y);
			rows_var++;
		}
		ft_putchar('\n');
		lines_var++;
	}
}
