#include <stdio.h>
#include "../libft.h"

static void	mem_print_test(void *data, size_t size, size_t len)
{
	if (size == sizeof(char)) {
		char *str = (char *)data;
		for (size_t	i = 0; i < len; i++)
			printf("%d", str[i]);
	}
	if (size == sizeof(int)) {
		int	*array = (int *)data;
		for (size_t i = 0; i < len; i++)
			printf("%d", array[i]);
	}
}

int	main() {
	char	*str1 = calloc(10, sizeof(char));
	char	*str2 = ft_calloc(10, sizeof(char));

	mem_print_test(str2, sizeof(char), 10);
	printf("\n");
	mem_print_test(str1, sizeof(char), 10);
	free(str1);
	free(str2);
	return (0);
}
