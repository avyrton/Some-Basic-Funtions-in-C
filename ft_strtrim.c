#include "libft.h"

static char	*ft_ncad(char *destino, const char *rcs, size_t z)
{
	size_t	k;

	k = 0;
	while (rcs[k] != '\0' && k < z)
	{
		destino[k] = rcs[k];
		++k;
	}
	while (k < z)
	{
		destino[k] = '\0';
		k++;
	}
	return (destino);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	inic;
	size_t	fnl;
	char	*novacad;

	if (!s1 || !set)
		return (NULL);
	inic = 0;
	while (s1[inic] && ft_strchr(set, s1[inic]))
		inic++;
	fnl = ft_strlen(s1 + inic);
	if (fnl)
		while (s1[fnl + inic - 1] != 0 && \
				ft_strchr(set, s1[fnl + inic - 1]) != 0)
			fnl--;
	novacad = malloc(sizeof(char) * fnl + 1);
	if (!novacad)
		return (NULL);
	ft_ncad(novacad, s1 + inic, fnl);
	novacad[fnl] = '\0';
	return (novacad);
}
