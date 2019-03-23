/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouzaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 21:59:46 by mbouzaie          #+#    #+#             */
/*   Updated: 2019/01/10 22:34:49 by mbouzaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_word(const char *s, char c)
{
	int		words;
	int		is_word;

	is_word = 0;
	words = 0;
	while (*s != '\0')
	{
		if (is_word == 1 && *s == c)
			is_word = 0;
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			words++;
		}
		s++;
	}
	return (words);
}

static int		ft_wordlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**w;
	int		words;
	int		i;

	if (!s || !c)
		return (NULL);
	i = 0;
	words = ft_count_word(s, c);
	if (!(w = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	while (words > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		w[i] = ft_strsub((const char *)s, 0, ft_wordlen((const char *)s, c));
		s = s + ft_wordlen((const char *)s, c);
		i++;
		words--;
	}
	w[i] = NULL;
	return (w);
}
