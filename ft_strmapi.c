#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	k;
	char			*cadena;

	k = 0;
	cadena = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (cadena == NULL)
		return (NULL);
	while (s[k] != '\0')
	{
		cadena[k] = f(k, s[k]);
		k++;
	}
	cadena[k] = '\0';
	return (cadena);
}
