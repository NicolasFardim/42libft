/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 15:13:46 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:49:38 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*rstr;
	size_t	i;
	size_t	cpy_i;

	rstr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!rstr)
		return (NULL);
	cpy_i = 0;
	i = 0;
	while (s1[cpy_i])
	{
		rstr[i] = s1[cpy_i];
		cpy_i++;
		i++;
	}
	cpy_i = 0;
	while (s2[cpy_i])
	{
		rstr[i] = s2[cpy_i];
		cpy_i++;
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}
