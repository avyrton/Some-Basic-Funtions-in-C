#include "libft.h"

void	*ft_memcpy(void *destino, const void *rcs, size_t z)
{
	char	*de_c;
	char	*rc_c;
	size_t	a;

	a = 0;
	de_c = (char *)destino;
	rc_c = (char *)rcs;
	while (a < z)
	{
		de_c[a] = rc_c[a];
		a++;
	}
	return (destino);
}
