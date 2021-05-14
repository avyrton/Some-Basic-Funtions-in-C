#include "libft.h"

char	*ft_strcpy(char *destino, const char *rcs)
{
	size_t	i;

	i = 0;
	while (rcs[i])
	{
		destino[i] = rcs[i];
		i++;
	}
	(destino[i] = '\0');
	return (destino);
}
