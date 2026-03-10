#include "libft.h"

static	size_t	my_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (src[0] == '\0' || size == 0)
	{
		dst[i] = '\0';
		return (my_len(src));
	}
	// final carlos
	while (dst[i] != '\0')
		i++;

	// começo joana
	while (src[j] != '\0' && j + i < size - 1)
	{
		dst[j + i] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (my_len(src) + size);
}


// VER DEPOIS
