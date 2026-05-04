/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:33:15 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:41:20 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_substr_size(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		ix;

	ix = 0;
	count = 0;
	while (s[ix])
	{
		if (s[ix] != c)
		{
			count++;
			while (s[ix] != c && s[ix])
			{
				ix++;
				if (!s[ix])
					return (count);
			}
		}
		ix++;
	}
	return (count);
}

static const char	*jump_word(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			return (&s[i]);
		}
		i++;
	}
	return (s);
}

static void	free_vec(char **vec)
{
	size_t	i;

	i = 0;
	while (vec[i])
	{
		free(vec[i]);
		i++;
	}
	free(vec);
}

char	**ft_split(char const *s, char c)
{
	char	**split_str;
	size_t	i;
	size_t	size;

	size = count_words(s, c);
	split_str = malloc((size + 1) * sizeof(*split_str));
	if (!split_str)
		return (NULL);
	i = 0;
	while (*s && *s == c)
		s++;
	while (i < size)
	{
		split_str[i] = ft_substr(s, 0, get_substr_size(s, c));
		if (!split_str[i])
		{
			free_vec(split_str);
			return (NULL);
		}
		s = jump_word(s, c);
		i++;
	}
	split_str[i] = NULL;
	return (split_str);
}
