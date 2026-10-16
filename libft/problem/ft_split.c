/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <amaghari@student.42belgium.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:22:45 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/16 14:42:50 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t ft_count_words (const char *str, char c)
{
	int i;
	size_t words;

	i = 0;
	while(str[i])
	{
		while (str[i] == c && str[i])
		{
			i++;
			while (str[i] != c && str[i])
			{
				i++;
				if (str[i] == c)
					j++;
			}
		}
	}
	return words;
}
static size_t len_word (char *str, char c)
{
	
}

static char *spliting(char *str, char c)
{
	int i;
	char *temp;

	i = 0 ;
	while (str[i] != c && str[i])
	{
		
		temp = malloc(sizeof(char))
	}
}

char **ft_split(char const *s, char c)
{
	size_t words;
	char **p;
	int i;
	int j;
	int v;

	if (!s)
		return NULL;
	words = ft_count_words(s, c);
	p = (char **)malloc(sizeof(char) * words + 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (s[i] == c)
			i++;
		p[j] = spliting(s, c);
		j++;
	}
	
	
}




