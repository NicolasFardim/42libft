#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int	array[5];
	int	a;

	(void)argc;
	if (argc == 1 || argc >= 3)
		return (0);
	a = *argv[1];
	printf("is alpha:   %d\n", ft_isalpha(a));
	printf("is digit:   %d\n", ft_isdigit(a));
	printf("is alnum:   %d\n", ft_isalnum(a));
	printf("is ascii:   %d\n", ft_isascii(a));
	printf("is isprint: %d\n\n", ft_isprint(a));
	printf("size of {%s} is: %ld\n\n", argv[1], ft_strlen(argv[1]));
	ft_memset(array, -100, 5 * 4);
	for (int i = 0; i < 5; i++)
		printf("array set to: %c\n", array[i]);
}
