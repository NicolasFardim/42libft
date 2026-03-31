#include "libft.h"


static unsigned int	check_set(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while(set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	trimmed_size(const char *s1, const char *set)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while(s1[i])
	{
		if (!check_set(s1[i], set))
			size++;
		i++;
	}
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed_str;
	size_t	str_i;
	size_t	trim_i;

	trimmed_str = malloc((trimmed_size(s1, set) + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	str_i = 0;
	trim_i = 0;
	while (s1[str_i])
	{
		if (!check_set(s1[str_i], set))
		{
			trimmed_str[trim_i] = s1[str_i];
			trim_i++;
		}
		str_i++;
	}
	trimmed_str[trim_i] = '\0';
	return (trimmed_str);
}
