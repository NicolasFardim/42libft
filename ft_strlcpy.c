#include "libft.h"

static size_t	my_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// cpy
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if(src[0] == '\0' || size == 0)
	{
		dst[i] = '\0';
		return(0);
	}
	while(src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(my_len(src));
}
