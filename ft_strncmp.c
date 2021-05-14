#include "libft.h"

int	ft_strncmp(const char *cad1, const char *cad2, size_t z)
{
	size_t	i;

	i = 0;
	if (z == 0)
		return (0);
	while (cad1[i] != '\0' && cad1[i] == cad2[i] && i < z - 1)
		i++;
	return ((unsigned char)cad1[i] - (unsigned char)cad2[i]);
}
