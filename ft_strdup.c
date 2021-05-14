#include "libft.h"

char	*ft_strdup(const char *cad)
{
	char	*cadena;
	size_t	k;

	k = 0;
	cadena = (char *)malloc(sizeof(char) * ft_strlen(cad) + 1);
	if (cadena == NULL)
		return (NULL);
	while (cad[k])
	{
		cadena[k] = cad[k];
		k++;
	}
	cadena[k] = '\0';
	return (cadena);
}
