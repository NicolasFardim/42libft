#include "libft.h"
#include <stdio.h>

static size_t	get_substr_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return(i);
		i++;
	}
	return (i);
}

static size_t	get_vector_size(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

// takes a string and transform into a vector by using 'c' as the delimeter
char **ft_split(char const *s, char c)
{
	char	**split_str;
	size_t	i;
	size_t	size;

	size = get_vector_size(s, c);
	split_str = malloc(size * sizeof(*split_str));
	i = 0;
	while (i < size)
	{
		split_str[i] = ft_substr(s, 0, get_substr_size(s, c));
		s = ft_strchr(s, c);
		s++; // had to use this because of strchr return
		i++;
	}
	return (split_str);
}
