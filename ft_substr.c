#include "libft.h"

static char	*ft_nov(const char *cad, size_t z)
{
	char	*new_cad;
	char	*new_cop;

	new_cad = (char *)malloc(sizeof(char) * (z + 1));
	if (!new_cad)
		return (NULL);
	new_cop = new_cad;
	while (*cad && z)
	{
		*new_cop++ = *cad++;
		z--;
	}
	*new_cop = '\0';
	return (new_cad);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final;

	if (ft_strlen(s) < start)
	{
		final = malloc(sizeof(char));
		if (!final)
			return (NULL);
		*final = '\0';
		return (final);
	}
	else if (s)
	{
		return (ft_nov(&s[start], len));
	}
	else
		return (NULL);
}
