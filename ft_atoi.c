#include "libft.h"

int	ft_atoi(const char *cad)
{
	int	a;
	int	res;
	int	min_us;

	a = 0;
	res = 0;
	min_us = 1;
	while (ft_isspace(cad[a]))
		a++;
	if (cad[a] == '-' || cad[a] == '+')
	{
		if (cad[a] == '-')
			min_us = -1;
		a++;
	}
	while (cad[a] >= '0' && cad[a] <= '9')
	{
		res = res * 10 + cad[a] - '0';
		a++;
	}
	return ((int)(res * min_us));
}
