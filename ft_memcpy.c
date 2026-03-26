#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	//no fundo um strcopy mas temos qwue tratar os bytes por isso o unsigned char para ignorar sinais e ser apenas 1 bite)
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	//protejer caso a moradas n existem, funcao original
	if(!src && !dest)
		return(0);
	s = (unsigned char*) src;
	d = (unsigned char*) dest;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}
