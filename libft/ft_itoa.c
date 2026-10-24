/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:57:42 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/24 15:53:36 by emosman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long long	find_dev(int n)
{
	long long	dev;
	long		temp;

	temp = n;
	dev = 1;
	while (temp >= 10)
	{
		dev *= 10;
		temp /= 10;
	}
	return (dev);
}

static short	int_max(int n, char *p)
{
	if (n == -2147483648)
	{
		ft_strlcpy(p, "-2147483648", 12);
		return (1);
	}
	return (0);
}

static short	is_zero(int n, char *p)
{
	if (n == 0)
	{
		*p = '0';
		return (1);
	}
	return (0);
}
static int	stringlen(int n)
{
	int	size;

	if (n == -2147483648)
		n++;
	if (n < 0)
		n *= -1;
	size = 0;
	while (n > 10)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	long long	dev;
	char		*p;
	short		i;

	i = 0;
	p = malloc (stringlen(n) + 1);
	if (int_max(n, p) || is_zero(n, p))
		return (p);
	if (n < 0)
	{
		p[i++] = '-';
		n = -n;
	}
	dev = find_dev(n);
	while (dev > 0)
	{
		p[i++] = (n / dev) + '0';
		n %= dev;
		dev /= 10;
	}
	return (p);
}
/*
#include <stdio.h>

int main (void){
	char *arr = ft_itoa(-42);
	char *arr2 = ft_itoa(100004);
	printf("%s\n", arr);
	printf("%s\n", arr2);
	printf("%s\n", ft_itoa(-2147483647));
	return 0;
}
*/
