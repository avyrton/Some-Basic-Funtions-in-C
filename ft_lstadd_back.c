#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tempo;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tempo = ft_lstlast(*(lst));
			tempo->next = new;
		}
	}
	return ;
}
