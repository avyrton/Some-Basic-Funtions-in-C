#include "libft.h"

char	*ft_strchr(const char *cad, int n)
{
	size_t	inic;

	inic = 0;
	while (cad[inic])
	{
		if (cad[inic] == (char)n)
			return ((char *)cad + inic);
		inic++;
	}
	if (!n && cad[inic] == '\0')
		return ((char *)cad + inic);
	return (NULL);
}
