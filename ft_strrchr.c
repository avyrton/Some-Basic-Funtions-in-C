#include "libft.h"

char	*ft_strrchr(const char *cad, int n)
{
	int	inic;

	inic = ft_strlen(cad);
	if (n == 0)
		return ((char *)cad + inic);
	while (inic >= 0)
	{
		if (cad[inic] == (char)n)
			return ((char *)cad +inic);
		inic--;
	}
	return (NULL);
}
