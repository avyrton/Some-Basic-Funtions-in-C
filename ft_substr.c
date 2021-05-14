#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	k;
	size_t	l;
	char	*final;

	k = 0;
	l = 0;
	final = (char *)malloc(sizeof(s) * (len + 1));
	if (!final || !s)
		return (NULL);
	while (s[k])
	{
		if (k >= start && l < len)
		{
			final[l] = s[k];
			l++;
		}
		k++;
	}
	final[l] = '\0';
	return ((char *)final);
}
