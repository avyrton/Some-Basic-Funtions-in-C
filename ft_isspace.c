#include "libft.h"

int	ft_isspace(int n)
{
	if (n == ' ' || n == '\t' || n == '\n' ||\
			n == '\v' || n == '\f' || n == '\r')
		return (1);
	else
		return (0);
}
