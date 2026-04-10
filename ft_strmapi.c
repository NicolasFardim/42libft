#include "libft.h"

int ft_strlen_s(char const *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    i++;
    return(i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *res;
    unsigned int    i;
    size_t          len;

    if (!s || !f)
		return (NULL);
    i = 0;
    len = ft_strlen_s(s);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
		return (NULL);
    while(s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return(res);
}