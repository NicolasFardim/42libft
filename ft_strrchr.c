#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *find;
	int	check;
	int	i;

	i = 0;
	check = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			find = (char *)&s[i];
			check = 1;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (!s || !check)
		return (NULL);

	return (find);
}
