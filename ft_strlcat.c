#include "libft.h"

// append N bytes of src into dst (size has to be at least size of dst)
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	int	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);

	/* if src is NULL or size is smaller or equal to dst this function does
	 nothing and return the size of src + the size of the parameter */
	if (!src || size <= dst_len)
	{
		return (src_len + size);
	}
	// here work just like strncat but size - 1 because of the NULL byte
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
	if the return value is bigger than the size: src is fully concatenated into
	dst.
	if equall or smaller src is truncated.

	if src is empty or the size is not enough for dst, it will do nothing and return
	the (size + lenght of src) why? idk
*/
