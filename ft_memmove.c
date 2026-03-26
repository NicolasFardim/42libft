#include "libft.h"

/* Just like memcpy, but deals with overlap cases */
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *temp_dest;
	const unsigned char *temp_src;

	// if dest is "ahead" of src, copys backwards, preventing overriding if there is overlap.
	if (dest > src)
	{
		// here both temp vars point to the last byte (- 1) to point to the right element
		// (e.g. size_t n = 3, temp + (3-1) that is the third byte)
		temp_dest = (unsigned char *)dest + (n - 1);
		temp_src = (const unsigned char *)src + (n - 1);
		// simply copy backwards
		while (n)
		{
			*temp_dest = *temp_src;
			temp_dest--;
			temp_src--;
			n--;
		}
	}
	// if dest is "before" src, makes a normal copy
	else
	{
		dest = ft_memcpy(dest, src, n);
	}
	return (dest);
}
