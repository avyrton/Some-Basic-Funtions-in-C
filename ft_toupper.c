#include "libft.h"

int	ft_toupper(int n)
{
	if (ft_islower(n))
		return (n - 32);
	return (n);
}
