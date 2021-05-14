#include "libft.h"

void	*ft_memchr (const void *vt, int n, size_t z)
{
	unsigned char	*vt_c;
	unsigned char	cb_c;

	vt_c = (unsigned char *)vt;
	cb_c = (unsigned char)n;
	while (z--)
	{
		if (*vt_c == cb_c)
			return (vt_c);
		vt_c++;
	}
	return (NULL);
}
