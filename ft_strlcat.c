#include "libft.h"

size_t	ft_strlcat(char *dest, const char *rcs, size_t z)
{
	size_t	k;
	size_t	l;

	k = 0;
	l = 0;
	while (dest[k] && k < z)
		k++;
	while (rcs[l] && (l + k + 1) < z)
	{
		dest[k + l] = rcs[l];
		l++;
	}
	if (k < z)
		dest[k + l] = '\0';
	return (k + ft_strlen(rcs));
}
