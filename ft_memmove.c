#include "libft.h"

void	*ft_memmove(void *destino, const void *rcs, size_t z)
{
	unsigned char	*de_c;
	unsigned char	*rc_c;

	de_c = (unsigned char *)destino;
	rc_c = (unsigned char *)rcs;
	if (de_c < rc_c)
		while (z--)
			*de_c++ = *rc_c++;
	else
	{
		de_c = de_c + z;
		rc_c = rc_c + z;
		while (z--)
			*--de_c = *--rc_c;
	}
	return (destino);
}
