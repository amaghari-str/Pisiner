/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:22:45 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/23 18:23:36 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if(!s || !c)
		return (1);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static size_t	len_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*spliting(const char *s, char c)
{
	size_t	len;
	char	*temp;

	len = len_word(s, c);
	temp = malloc(sizeof(char) * len + 1);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s, len + 1);
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**p;
	int		i;
	size_t	j;

	words = ft_count_words(s, c);
	p = (char **)malloc(sizeof(char *) * words + 1);
	if (!p || !s || !c)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		p[j] = spliting(s + i, c);
		i += len_word(s + i, c);
		j++;
	}
	p[j] = NULL;
	return (p);
}
/*
#include <stdio.h>

static void	print_split(const char *s, char c)
{
	char	**res;
	size_t	i;

	printf("ft_split(\"%s\", '%c'):\n", s ? s : "(null)", c);
	res = ft_split(s, c);
	if (!res)
	{
		printf("  -> NULL\n\n");
		return ;
	}
	i = 0;
	while (res[i])
	{
		printf("  [%zu] \"%s\"\n", i, res[i]);
		free(res[i]);
		i++;
	}
	printf("  (слов: %zu)\n\n", i);
	free(res);
}

int	main(void)
{
	print_split("hello world", ' ');
	print_split("  hello   world  ", ' ');
	print_split("one,two,three", ',');
	print_split("", ' ');
	print_split(",,,", ',');
	print_split(",start", ',');
	print_split("end,", ',');
	print_split("nodelimiters", ' ');
	print_split("a", 'a');
	print_split("abc", '\0');
	print_split(NULL, ' ');
	return (0);
}
*/
