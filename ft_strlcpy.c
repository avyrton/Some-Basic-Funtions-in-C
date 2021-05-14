#include "libft.h"

size_t	ft_strlcpy(char *destino, const char *rcs, size_t dz)
{
	size_t	a;

	a = 0;
	if (dz == 0)
		return (ft_strlen(rcs));
	if (!destino || !rcs)
		return (0);
	while (rcs[a] != '\0' && a < (dz - 1))
	{
		destino[a] = rcs[a];
		a++;
	}
	destino[a] = '\0';
	return (ft_strlen(rcs));
}
