#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	z_cad;
	char	*novacad;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	z_cad = ft_strlen(s1);
	while (z_cad && ft_strchr(set, s1[z_cad]))
		z_cad--;
	novacad = ft_substr((char *) s1, 0, z_cad + 1);
	return (novacad);
}
