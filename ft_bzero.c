#include "libft.h"

void	ft_bzero(void *cad, size_t z)
{
	unsigned char	*cad_c;

	cad_c = (unsigned char *)cad;
	while (z--)
		*cad_c++ = '\0';
}
