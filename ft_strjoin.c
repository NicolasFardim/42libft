#include "libft.h"

size_t	my_strlen(const char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*rstr;
	size_t	i;
	size_t	cpy_i;


	rstr = malloc((my_strlen(s1) + my_strlen(s2) + 1) * sizeof(char));
	if (!rstr)
		return (NULL);
	cpy_i = 0;
	i = 0;
	while (s1[cpy_i])
	{
		rstr[i] = s1[cpy_i];
		cpy_i++;
		i++;
	}
	cpy_i = 0;
	while (s2[cpy_i])
	{
		rstr[i] = s2[cpy_i];
		cpy_i++;
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}
