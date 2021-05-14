#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*g_element;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		g_element = *lst;
		*lst = g_element->next;
		free(g_element);
	}
	*lst = NULL;
}
