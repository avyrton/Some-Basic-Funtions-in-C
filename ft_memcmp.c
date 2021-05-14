#include "libft.h"

int	ft_memcmp(const void *cad1, const void *cad2, size_t z)
{
	size_t			a;
	unsigned char	*c1_c;
	unsigned char	*c2_c;

	a = 0;
	c1_c = (unsigned char *)cad1;
	c2_c = (unsigned char *)cad2;
	while (a < z)
	{
		if (c1_c[a] != c2_c[a])
			return (c1_c[a] - c2_c[a]);
		a++;
	}
	return (0);
}
