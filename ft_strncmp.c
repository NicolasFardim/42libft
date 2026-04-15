#include "libft.h"

// compare n bytes of both strings
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	// run while s1 and s2 still valid, and until n - 1 (-1 to synch with index)
	while(i < n - 1 && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
	return value will be 0 (both strings are equal)
	or a positive or negative number.
	according with the ascii table:
	if return positive it means s1 is bigger than s2
	if negative it means s2 is bigger than s1
*/
