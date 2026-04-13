#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *h;

    while (*lst != NULL)
    {
        h = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = h;
    }
    *lst = NULL;
}