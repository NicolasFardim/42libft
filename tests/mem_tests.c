#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

void	mem_print_test(void *data, size_t size, size_t len)
{
	if (size == sizeof(char)) {
		char *str = (char *)data;
		for (size_t	i = 0; i < len; i++)
			printf("%c", str[i]);
	}
	if (size == sizeof(int)) {
		int	*array = (int *)data;
		for (size_t i = 0; i < len; i++)
			printf("%d", array[i]);
	}
}

// mem tests
int	main() {
	char	str1[5];
	char	str2[5];
	int		array1[5];
	int		array2[5];
	char	c = 'a';
	int		i = 0;

	// MEMSET ORIGINAL
	printf("MEMSET_ORIGINAL:");
	printf("\nChars = ");
	memset(str1, c, sizeof(str1));
	mem_print_test(str1, sizeof(char), sizeof(str1));

	printf("\nInt = ");
	memset(array1, i, sizeof(array1)); // NOTE: MEMSET DOESN'T ACCEPT MULTIPLICATION BY ELEMENT (maybe it does the division by itself???)
	mem_print_test(array1, sizeof(int), sizeof(array1) / sizeof(int));

	// MY MEMSET
	printf("\nMEMSET_MYVERSION:");
	printf("\nChars = ");
	ft_memset(str2, c, sizeof(str1));
	mem_print_test(str2, sizeof(char), sizeof(str1));

	printf("\nInt = ");
	ft_memset(array2, sizeof(int), sizeof(array2) / sizeof(int));
	mem_print_test(array2, sizeof(int), sizeof(array2) / sizeof(int));
}
