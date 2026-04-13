#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int f;

    f = 0;
    while(lst != NULL)
    {
        f++;
        lst = lst->next;
    }
    return(f);
}