#include "libft.h"

int	ft_isalnum(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= '0' && n <= '9') || \
		   	(n >= 'A' && n <= 'Z'))
	{
		return (1);
	}
	return (0);
}
