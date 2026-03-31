#include <stdio.h>
#include "../libft.h"

int	main(int argc, char **argv) {
	(void)argc;
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_substr(argv[1], 0, 5);
	s2 = ft_strjoin(argv[1], argv[2]);
	s3 = ft_strtrim(argv[1], argv[2]);
	printf("substr:  %s\n", s1);
	printf("strjoin: %s\n", s2);
	printf("strtrim: %s\n", s3);
	free(s1);
	free(s2);
	free(s3);
	return (0);
}
