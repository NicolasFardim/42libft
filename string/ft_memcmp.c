/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:23:44 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:44:10 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s;
	unsigned char	*p;

	s = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while (n)
	{
		if (*s != *p)
			return (*s - *p);
		s++;
		p++;
		n--;
	}
	return (0);
}
