#include <stdio.h>
#include "../libft.h"

int	main(int argc, char **argv) {
	(void)argc;
	char	**words;
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_substr(argv[1], 0, 5);
	s2 = ft_strjoin(argv[1], argv[2]);
	s3 = ft_strtrim(argv[1], argv[2]);
	printf("substr:  %s\n", s1);
	printf("strjoin: %s\n", s2);
	printf("strtrim: %s\n", s3);

	words = ft_split(argv[1], ' ');
	printf("strsplit:\n");
	for (size_t i = 0; words[i] != NULL; i++) {
		printf("str[%li]: %s\n", i, words[i]);
	}
	free(s1);
	free(s2);
	free(s3);
	for (int i = 0; words[i] != NULL; i++)
		free(words[i]);
	free(words);
	return (0);
}
