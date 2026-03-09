#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "/home/nicolas/Codes/42c/libft/libft.h"

// strings tests
int	main(int argc, char **argv)
{
	(void)argc;

	int c = '\0';
	printf("STR ORIGINAL STATE: %s\n\n", argv[1]);
	printf("STRLEN_ORIGNAL:     %ld\n", strlen(argv[1]));
	printf("STRLEN_MYVERSION:   %ld\n", ft_strlen(argv[1]));
	printf("STRCHR_ORIGINAL:    %s __find( %c )\n", strchr(argv[1], c), c);
	printf("STRCHR_MYVERSION:   %s __find( %c )\n", ft_strchr(argv[1], c), c);
	printf("STRRCHR_ORIGINAL:   %s __find( %c )\n", strrchr(argv[1], c), c);
	printf("STRRCHR_MYVERSION:  %s __find( %c )\n", ft_strrchr(argv[1], c), c);
}
