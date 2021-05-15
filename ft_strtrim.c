#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inic;
	size_t	fnl;
	char	*novacad;

	if (!s1 || !set)
		return (NULL);
	inic = 0;
	while (s1[inic] && ft_strchr(set, si[inic]))
		inic++;
	fnl = ft_strlen(s1 + inic);
	if (fnl)
		while (s1[fnl + inic - 1] != 0 && ft_strchr(set, s1[fnl +inic - 1]) != 0)
		fnl--;
	novacad = malloc(sizeof(char) * fnl + 1);
	if (!novocad)
		return (NULL);
	ft_memcpy(novacad, s1 + inic, fnl);
	novacad[fnl + 1] = '\0'
	return (novacad);
}
