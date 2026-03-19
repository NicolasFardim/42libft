#include <libft.h>
//msm teoria de um strcmp so que retornarmos um ponteiro de onde esta aquele int
void	*ft_memchr(const void *src, int c, size_t n)
{
    unsigned char *s;
    unsigned char x;
    size_t i;

    s = (unsigned char*) src;
    x = (unsigned char) c;
    i = 0;
    while(i < n)
    {
        if(s[i] == x)
        return(&s[i]);
        i++;
    }
    return(0);
}