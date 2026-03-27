#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "../libft.h"

static void	mem_print_test(void *data, size_t size, size_t len)
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
	// vars for memset
	char	str_set1[5];
	char	str_set2[5];
	int		array_set1[5];
	int		array_set2[5];
	char	c = 'a';
	int		i = 0;

	// vars for bzero
	int		array_zero1[5];
	int		array_zero2[5];

	// vars for memcpy
	char	strcpy1_src[] = "testsss";
	char	strcpy1_dst[8];
	int		arraycpy1_src[] = {1, 2, 3, 4};
	int		arraycpy1_dst[4];
	char	strcpy2_src[] = "testsss";
	char	strcpy2_dst[8];
	int		arraycpy2_src[] = {1, 2, 3, 4};
	int		arraycpy2_dst[4];

	// vars for memmove
	char	strmove1_src[] = "testsss";
	char	strmove1_dst[8];
	char	strmove2_src[] = "testsss";
	char	strmove2_dst[8];
	char	strmove1_overlap[] = "Teste";
	char	strmove2_overlap[] = "Teste";

	// MEMSET
	printf("MEMSET_ORIGINAL:");
	printf("\nChars = ");
	memset(str_set1, c, sizeof(str_set1));
	mem_print_test(str_set1, sizeof(char), sizeof(str_set1));

	printf("\nInt = ");
	memset(array_set1, i, sizeof(array_set1));
	mem_print_test(array_set1, sizeof(int), sizeof(array_set1) / sizeof(int));

	printf("\n\nMEMSET_MYVERSION:");
	printf("\nChars = ");
	ft_memset(str_set2, c, sizeof(str_set2));
	mem_print_test(str_set2, sizeof(char), sizeof(str_set2));

	printf("\nInt = ");
	ft_memset(array_set2, i, sizeof(array_set2));
	mem_print_test(array_set2, sizeof(int), sizeof(array_set2) / sizeof(int));

	// BZERO
	printf("\n\n\nBZERO_ORIGINAL:\n");
	bzero(array_zero1, sizeof(array_zero1));
	mem_print_test(array_zero1, sizeof(int), sizeof(array_zero1) / sizeof(int));

	printf("\n\nBZERO_MYVERSION:\n");
	ft_bzero(array_zero2, sizeof(array_zero1));
	mem_print_test(array_zero2, sizeof(int), sizeof(array_zero2) / sizeof(int));

	// MEMCPY
	printf("\n\n\nMEMCPY_ORIGINAL:");
	printf("\nChars = ");
	memcpy(strcpy1_dst, strcpy1_src, sizeof(strcpy1_src));
	printf("%s", strcpy1_dst);
	// printf("\nsize of arraydst:%ld | size of arraycpy %ld", sizeof(arraycpy_dst), sizeof(arraycpy_src));

	printf("\nInt = ");
	memcpy(arraycpy1_dst, arraycpy1_src, sizeof(arraycpy1_src));
	mem_print_test(arraycpy1_dst, sizeof(int), sizeof(arraycpy1_dst) / sizeof(int));

	printf("\n\nMEMCPY_MYVERSION:");
	printf("\nChars = ");
	ft_memcpy(strcpy2_dst, strcpy2_src, sizeof(strcpy2_src));
	printf("%s", strcpy2_dst);

	printf("\nInt = ");
	ft_memcpy(arraycpy2_dst, arraycpy2_src, sizeof(arraycpy2_src));
	mem_print_test(arraycpy2_dst, sizeof(int), sizeof(arraycpy2_dst) / sizeof(int));

	// MEMMOVE
	printf("\n\n\nMEMMOVE_ORIGNAL:");
	printf("\nnormal, no overlap = ");
	memmove(strmove1_dst, strmove1_src, sizeof(strmove1_src));
	printf("%s", strmove1_dst);
	printf("\noverlap = ");
	memmove(strmove1_overlap + 1, strmove1_overlap, 4);
	printf("%s", strmove1_overlap);

	printf("\n\nMEMMOVE_MYVERSION:");
	printf("\nnormal, no overlap = ");
	ft_memmove(strmove2_dst, strmove2_src, sizeof(strmove2_src));
	printf("%s", strmove2_dst);
	printf("\noverlap = ");
	ft_memmove(strmove2_overlap + 1, strmove2_overlap, 4);
	printf("%s", strmove2_overlap);
}
