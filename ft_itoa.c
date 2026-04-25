/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <nicolas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:01:37 by nicolas           #+#    #+#             */
/*   Updated: 2026/04/25 16:51:05 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_place_value(long int n)
{
	size_t	place_value;

	place_value = 1;
	if (n < 0)
	{
		n = -n;
		place_value++;
	}
	while (n > 9)
	{
		n /= 10;
		place_value++;
	}
	return (place_value);
}

char	*convert_to_char(char *s_nbr, long int n, size_t place_v)
{
	s_nbr[place_v] = '\0';
	place_v--;
	if (n == 0)
	{
		s_nbr[0] = '0';
		return (s_nbr);
	}
	if (n < 0)
	{
		n = -n;
		s_nbr[0] = '-';
	}
	while (n > 0)
	{
		s_nbr[place_v] = (n % 10) + '0';
		n /= 10;
		place_v--;
	}
	return (s_nbr);
}

char	*ft_itoa(int n)
{
	char		*nbr_str;
	long int	number;
	size_t		place_value_size;

	number = n;
	place_value_size = count_place_value(number);
	nbr_str = malloc((place_value_size + 1) * sizeof(char));
	if (!nbr_str)
		return (NULL);
	return (convert_to_char(nbr_str, number, place_value_size));
}
