#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	z;

	z = 0;
	while (lst)
	{
		lst = lst->next;
		z++;
	}
	return (z);
}
