#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	t_list	*last;
	last = ft_lstlast(*lst);
	last->next = new;
}
