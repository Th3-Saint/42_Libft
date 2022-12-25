/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobaii <mrobaii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:12:17 by mrobaii           #+#    #+#             */
/*   Updated: 2021/11/24 01:26:59 by mrobaii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			while (str[i] != c && str[i] != '\0')
				i++;
			words++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	b;

	if (!s)
		return (NULL);
	b = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (b + 1));
	if (!split)
		return (NULL);
	i = 0;
	k = 0;
	j = 0;
	while (j < b)
	{
		while (s[i++] == c)
			k = i;
		while (s[i] != c && s[i])
			i++;
		split[j++] = ft_substr(s, k, i - k);
	}
	split[j] = NULL;
	return (split);
}
