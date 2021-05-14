#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tempo;

	tempo = lst;
	if (lst)
		while (tempo->next)
			tempo = tempo->next;
	return (tempo);
}
