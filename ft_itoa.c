#include "libft.h"

static int	lennum(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*cade;
	long	nl;
	int		k;

	nl = n;
	k = lennum(nl);
	cade = (char *)malloc(sizeof(char) * (k + 1));
	if (NULL == cade)
		return (NULL);
	cade[k] = '\0';
	if (nl == 0)
		cade[0] = '0';
	if (nl < 0)
	{
		cade[0] = '-';
		nl = nl * (-1);
	}
	while (nl > 0)
	{
		cade[k - 1] = (char)((nl % 10) + 48);
		nl = nl / 10;
		k--;
	}
	return (cade);
}
