#include "libft.h"

void	*ft_calloc(size_t cont, size_t z)
{
	char	*dir;

	dir = malloc(z * cont);
	if (!dir)
		return (NULL);
	ft_memset(dir, 0, cont * z);
	return (dir);
}
