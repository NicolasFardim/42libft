#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*content;
	t_list	*new_lst;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		content = f(lst->content);
		current = ft_lstnew(content);
		if (!current)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, current);
		lst = lst->next;
	}
	return(new_lst);
}
