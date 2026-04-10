#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;
    long int f;

    f = n;
    if(f < 0)
    {
        write(fd, "-", 1);
        f = -f;
    }
    if(f >= 10)
    ft_putnbr_fd((int)(f / 10), fd);
    c = (f % 10) + '0';
    write(fd, &c, 1);
}