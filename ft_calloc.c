#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *p;
	size_t max_size = (size_t)-1;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (max_size / nmemb < size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
