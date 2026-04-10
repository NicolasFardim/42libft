#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int c;

    if(!s)
    return;
    c = 0;
    while(s[c] != '\0')
    {
        write(fd, &s[c], 1);
        c++;
    }
    write(fd, "\n", 1);
}