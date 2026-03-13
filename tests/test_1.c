#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "../libft.h"

// tests for check
int	main(int argc, char **argv)
{
	(void)argc;
	char c = argv[1][0];

	printf("TOUPPER_ORIGINAL:  %c\n", toupper(c));
	printf("TOLOWER_ORIGINAL:  %c\n", tolower(c));
	printf("TOUPPER_MYVERSION: %c\n", ft_toupper(c));
	printf("TOLOWER_MYVERSION: %c\n", ft_tolower(c));

	printf("is alpha:   %d\n", ft_isalpha(c));
	printf("is digit:   %d\n", ft_isdigit(c));
	printf("is alnum:   %d\n", ft_isalnum(c));
	printf("is ascii:   %d\n", ft_isascii(c));
	printf("is isprint: %d\n\n", ft_isprint(c));
}
