#include "libft.h"

static size_t my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
		i++;
	return (i + 1);
}

 char *ft_strdup(const char *s)
 {
	char	*dup_str;
	size_t	i;

	dup_str = malloc(my_strlen(s) * sizeof(char));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return(dup_str);
}
