#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

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


int	main (int argc, char **argv) {
	t_list	*Head = init_lst(argc - 1, &argv[1]);
	t_list	*New_Node = ft_lstmap(Head, to_up, free);
	print_list(Head);
	print_list(New_Node);
	ft_lstclear(&Head, free);
	ft_lstclear(&New_Node, free);
}
