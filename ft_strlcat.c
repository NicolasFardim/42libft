#include "libft.h"

static size_t	my_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// append N bytes of src into dst (size has to be at least size of dst).
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	int	i;

	src_len = my_len(src);
	dst_len = my_len(dst);

	if (!src || size <= dst_len)
	{
		return (src_len + size);
	}
	i = 0;
	while (src[i] != '\0' && i + dst_len < size - 1)
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}

/*
	return value of this function can be useful for check if the string was truncated.
	if the return value is bigger than the size: string is fully concatenated.
	if equall or smaller is truncated.

	if src is empty or the size is not enough for dst, it will do nothing and return
	the (size + lenght of src) why? idk
*/
