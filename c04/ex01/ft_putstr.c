/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 18:16:03 by amaghari          #+#    #+#             */
/*   Updated: 2026/08/17 14:48:58 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int main(){
	ft_putnbr(42);           // 42
	ft_putnbr(-42);          // -42
	ft_putnbr(0);            // 0
	ft_putnbr(2147483647);   // INT_MAX
	ft_putnbr(-2147483648);  // INT_MIN
	return 0;
}
*/
