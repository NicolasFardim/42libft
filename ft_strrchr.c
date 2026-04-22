#include "libft.h"

// return a pointer to the last occurrence of 'c'
char *ft_strrchr(const char *s, int c)
{
	// I created a temo string to hold the last value
	char *find;
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	find = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
		{
			// everytime it found the occurence it points there
			find = (char *)&s[i];
		}
		i++;
	}

	// same thing of strchr
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);

	/* returns find, that can be pointing to the last occurrence of 'c' or
	NULL if find still NULL (didn't found nothing)*/
	return (find);
}
