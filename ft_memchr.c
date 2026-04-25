/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:22:17 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:45:19 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	x;

	s = (unsigned char *)src;
	x = (unsigned char )c;
	while (n)
	{
		if (*s == x)
			return ((void *)s);
		s++;
		n--;
	}
	return (0);
}
