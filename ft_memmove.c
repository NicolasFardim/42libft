/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:24:53 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:54:41 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_dest;
	const unsigned char	*temp_src;

	if (dest > src)
	{
		temp_dest = (unsigned char *)dest + (n - 1);
		temp_src = (const unsigned char *)src + (n - 1);
		while (n)
		{
			*temp_dest = *temp_src;
			temp_dest--;
			temp_src--;
			n--;
		}
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}
