#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int c;

    if(!s)
    return ;
    c = 0;
    while(s[c] != '\0')
    {
        write(fd, &s[c], 1);
        c++;
    }
}