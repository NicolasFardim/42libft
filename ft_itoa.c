#include "libft.h"

int ft_tamanho(int n)
{
    long int f;
    int tamanho;
    
    f = n;
    tamanho = 0;
    if(f <= 0)
    {
        tamanho = 1;
    }
    if (f < 0)
        f = -f;
    while(f > 0)
    {
        f /= 10;
        tamanho++;
    }
    return(tamanho);
}

char *ft_itoa(int n)
{
    char *s;
    long int g;
    int h;

    g = n;
    h = ft_tamanho(n);
    s = malloc(sizeof(char) * (h + 1));
    if (!s)
    return (NULL);
    if(g < 0)
    {
        s[0] = '-';
        g = -g;
    }
    if(g == 0)
    {
        s[0] = '0';
    }
    s[h] = '\0';
    while(g > 0)
    {
        s[--h] = (g % 10) + '0';
        g /= 10;
    }
    return(s);
}
