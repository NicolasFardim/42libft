#include <libft.h>
//e basicamente um strcmp so que n colocamos o caracter nulo como parametro para parar pq o nulo na memoria e so mais um caracter 
// foi o que errei mas de resto e exatamente igual ao strcmp
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char* s;
    unsigned char* p;
    size_t i;

    s = (unsigned char*) s1;
    p = (unsigned char*) s2;
    i = 0;

    while(i < n )
    {
        if (s[i] != p[i])
			return (s[i] - p[i]);
        i++;
    }
    return(0);
}