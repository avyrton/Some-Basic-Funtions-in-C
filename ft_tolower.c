#include "libft.h"

int	ft_tolower(int n)
{
	if (ft_isupper(n))
		return (n + 32);
	return (n);
}
