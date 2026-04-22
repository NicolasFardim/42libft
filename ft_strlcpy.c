#include "libft.h"

// copy n bytes from src to dst (take the NULL terminator into account on the size)
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen((src)));
	if(!src)
	{
		dst[i] = '\0';
		return(0);
	}
	/* size - 1 because this function needs the total size of the string
	together with the NULL terminator*/
	while(src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(ft_strlen(src));
}
