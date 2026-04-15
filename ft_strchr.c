#include "libft.h"

// return a pointer of the first occurrence of 'c'
char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	/* the NULL is considered part of the string, so return a pointer for it
	(return a pointer to the last byte that is where NULL terminator lives)
	i could try "return((char *)&s[ft_strlen(s)]) and move this up later" */
	if (c == '\0')
		return ((char *)&s[i]);

	// if nothing is found, return NULL
	return (NULL);
}
