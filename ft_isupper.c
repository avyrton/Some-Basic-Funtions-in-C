#include "libft.h"

int	ft_isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	else
		return (0);
}
