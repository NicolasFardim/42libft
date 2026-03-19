#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	simbolo;
	int	res;

	res = 0;
	simbolo = 1;
	c = 0;
	while ((str[c] >= 9 && str[c] <= 13) || str[c] == 32)
		c++;
	if (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			simbolo = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * simbolo);
}