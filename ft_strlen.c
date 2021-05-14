#include "libft.h"

size_t	ft_strlen(const char *cad)
{
	size_t	len;

	len = 0;
	while (cad[len])
		len++;
	return (len);
}
