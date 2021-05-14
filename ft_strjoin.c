#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		k;
	unsigned int		l;
	char				*resultado;

	k = 0;
	l = 0;
	resultado = (char *)malloc(sizeof(char) * (ft_strlen(s1) \
			   + ft_strlen(s2) + 1 ));
	if (resultado == NULL)
		return (NULL);
	while (s1[k] != '\0')
	{
		resultado[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		resultado[k + l] = s2[l];
		l++;
	}
	resultado[k + l] = '\0';
	return (resultado);
}
