/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:52:07 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/14 17:06:05 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <srdio.h>
int main() {
    printf("%d\n", ft_recursive_factorial(5));  // Output: 120
    printf("%d\n", ft_recursive_factorial(0));  // Output: 1
    printf("%d\n", ft_recursive_factorial(-1)); // Output: 0
    return 0;
}
*/
