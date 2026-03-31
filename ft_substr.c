#include "libft.h"

/* add this guard later, maybe for start be higher then the string and
	len being 0
	if (len == 0 || start > my_strlen(s))
		return (rstr); */
/* also this function uses len to make the allocation, but if i but 1000 or it
allocate 1000 even if the substring is just 5 byes (it works not sure if is
is optimal)*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rstr;
	int	i;

	rstr = malloc((len + 1) * sizeof(char));
	if (!rstr)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && len)
	{
		rstr[i] = s[start];
		start++;
		len--;
		i++;
	}
	rstr[i] = '\0';
	return (rstr);
}
