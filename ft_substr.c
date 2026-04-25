/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:25:28 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:55:24 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*create_substr(const char *str, char *sub, size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (str[start] && i < len)
	{
		sub[i] = str[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rstr;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (len == 0 || start >= str_len)
	{
		rstr = malloc(1);
		if (!rstr)
			return (NULL);
		rstr[0] = '\0';
		return (rstr);
	}
	if (len > str_len - start)
		len = str_len - start;
	rstr = malloc((len + 1) * sizeof(char));
	if (!rstr)
		return (NULL);
	return (create_substr(s, rstr, (size_t)start, len));
}
