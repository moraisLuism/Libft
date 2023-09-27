/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmorais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:11:43 by lmorais-          #+#    #+#             */
/*   Updated: 2023/09/15 19:11:45 by lmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
			i++;
		if (str[i - 1] != c)
			words++;
	}
	return (words);
}

static int	get_word(const char *str, int *end, char c)
{
	size_t	start;

	start = *end;
	while (str[*end] != c && str[*end])
		*end += 1;
	return (*end - start);
}

char	**ft_split(char const *str, char c)
{
	char	**out;
	int		i;
	int		start;
	int		end;
	int		words;

	i = 0;
	start = 0;
	end = 0;
	if (!str)
		return (NULL);
	words = counter(str, c);
	out = malloc((words + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	while (i < words)
	{
		while (str[start] == c && str[start])
			start++;
		end = start;
		out[i] = ft_substr(str, end, get_word(str, &start, c));
		i++;
	}
	out[i] = NULL;
	return (out);
}
