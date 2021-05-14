#include "libft.h"

void	*ft_memccpy(void *destino, const void *rcs, int n, size_t z)
{
	unsigned char	*de_c;
	unsigned char	*rc_c;
	unsigned char	cs_c;
	size_t			a;

	de_c = (unsigned char *)destino;
	rc_c = (unsigned char *)rcs;
	cs_c = (unsigned char)n;
	a = 0;
	while (a < z)
	{
		de_c[a] = rc_c[a];
		if ((de_c[a]) == cs_c)
			return ((char *)destino + a + 1);
		a++;
	}
	return (NULL);
}
