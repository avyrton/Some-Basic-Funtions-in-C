#include "libft.h"

char	*ft_strnstr(const char *pajar, const char *aguja, size_t z)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (aguja[a] == '\0')
		return ((char *)pajar);
	while (a < z && pajar[a] != '\0')
	{
		b = 0;
		while (a + b < z && pajar[a + b] == aguja[b])
			b++;
		if (aguja[b] == '\0')
			return ((char *)pajar + a);
		a++;
	}
	return (NULL);
}
