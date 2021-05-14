#include "libft.h"

void	*ft_memset(void *destino, int n, size_t z)
{
	unsigned char	*de_c;
	unsigned char	n_c;

	de_c = (unsigned char *)destino;
	n_c = (unsigned char)n;
	while (z--)
		*de_c++ = n_c;
	return (destino);
}
