#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include <ctype.h>
#include "../libft.h"

// strings tests
int	main(int argc, char **argv) {
	char	*str1 = "";
	char	*str2 = "";
	char	*strct = "";
	char	*strct2 = "";
	char	cpyto[256];
	char	cpy2to[256];
	char	c = 0;
	size_t	i = 0;

	if (argc >= 2) { str1 = argv[1]; }
	if (argc >= 3) { str2 = argv[2]; strct = strdup(str2); strct2 = strdup(str2); }
	if (argc >= 4) { i = atoi(argv[3]); }
	if (argc == 5) { c = argv[4][0]; }

	printf("STR ORIGINAL STATE: str1: %s | str2: %s\nVALUES: Char: %c | Int: %ld | Sizeof( %s ): %ld\n\n", str1, str2, c, i, str1, strlen(str1) + 1);
	printf("STRLEN_ORIGNAL:     %ld\n", strlen(str1));
	printf("STRLEN_MYVERSION:   %ld\n", ft_strlen(str1));
	printf("STRCHR_ORIGINAL:    %s __find( %c )\n", strchr(str1, c), c);
	printf("STRCHR_MYVERSION:   %s __find( %c )\n", ft_strchr(str1, c), c);
	printf("STRRCHR_ORIGINAL:   %s __find( %c )\n", strrchr(str1, c), c);
	printf("STRRCHR_MYVERSION:  %s __find( %c )\n", ft_strrchr(str1, c), c);
	printf("STRNCMP_ORIGNAL:    %d\n", strncmp(str1, str2, i));
	printf("STRNCMP_MYVERSION:  %d\n", ft_strncmp(str1, str2, i));
	printf("STRLCPY_ORIGINAL: return value:  %ld  | copied string:   %s\n", strlcpy(cpyto, str1, i), cpyto);
	printf("STRLCPY_MYVERSION: return value: %ld  | copied string:   %s\n", ft_strlcpy(cpy2to, str1, i), cpy2to);
	printf("STRLCAT_ORIGINAL: return value:  %ld  | concat string:   %s\n", strlcat(strct, str1, i), strct);
	printf("STRLCAT_MYVERSION: return value: %ld  | concat string:   %s\n", ft_strlcat(strct2, str1, i), strct2);
	printf("STRNSTR_ORIGINAL:   %s\n", strnstr(str1, str2, i));
	printf("STRNSTR_MYVERSION:  %s\n", ft_strnstr(str1, str2, i));
	free (strct);
	free (strct2);
}
