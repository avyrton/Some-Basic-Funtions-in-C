#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*final;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
	final = malloc(sizeof(char))
	if (i < star)
	{
		if (!final)
			return (NULL);
		*final = '\0'
		return (final);
	}
	else if (s)
	{
		return (ft_strndup(&s[start], len));
	}
	else
		return (NULL);
}
