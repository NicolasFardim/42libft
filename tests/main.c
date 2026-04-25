#include "../libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <malloc.h>

void	print_list(t_list *Head) {
	for (t_list *current = Head; current != NULL; current=current->next)
		printf("%s\n", (char *)current->content);
}

t_list	*init_lst(int size, char **vec)
{
	t_list	*Head = ft_lstnew(ft_strdup(vec[0]));
	int	i = 1;

	while(i < size)
	{
		ft_lstadd_back(&Head, ft_lstnew(ft_strdup(vec[i])));
		i++;
	}
	return (Head);
}

void	*to_up(void *c)
{
	int i = 0;
	char *str = ft_strdup((char *)c);
	while(str[i])
	{
		if (islower(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

static	void	free_vec(char **vec)
{
	size_t	i;

	i = 0;
	while (vec[i])
	{
		free(vec[i]);
		i++;
	}
	free(vec);
}


int	main () {
	t_list * l =  NULL; t_list * l2 =  NULL;
	ft_lstadd_back(NULL, ft_lstnew((void*)1));
}
