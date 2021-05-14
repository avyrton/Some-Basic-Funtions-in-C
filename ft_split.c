#include "libft.h"

static int	ft_contw (char const *s, char c)
{
	int	a;
	int	cont;

	a = 0;
	cont = 0;
	while (s[a])
	{
		while (s[a] == c)
			a++;
		if (s[a] != c && s[a])
			cont++;
		while (s[a] != c && s[a])
			a++;
	}
	return (cont);
}

static char	**ft_fr_tabl(char **tabl)
{
	unsigned int	b;

	b = 0;
	while (tabl[b])
	{
		free (tabl[b]);
		b++;
	}
	free (tabl);
	return (NULL);
}

static void	ft_go_nxtw(char **nxt_w, unsigned int *nxt_w_l, char c)
{
	unsigned int	k;

	*nxt_w += *nxt_w_l;
	*nxt_w_l = 0;
	k = 0;
	while (**nxt_w && **nxt_w == c)
		(*nxt_w)++;
	while ((*nxt_w)[k])
	{
		if ((*nxt_w)[k] == c)
			return ;
		(*nxt_w_l)++;
		k++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tabl;
	char			*nxt_w;
	unsigned int	nxt_w_l;
	unsigned int	l;
	unsigned int	cont;

	cont = ft_contw(s, c);
	tabl = (char **)malloc(sizeof(char *) * (cont + 1));
	if (!tabl && !s)
		return (NULL);
	nxt_w = (char *)s;
	nxt_w_l = 0;
	l = 0;
	while (l < cont)
	{
		ft_go_nxtw(&nxt_w, &nxt_w_l, c);
		tabl[l] = (char *)malloc(sizeof(char) * (nxt_w_l + 1));
		if (!tabl[l])
			return (ft_fr_tabl(tabl));
		ft_strlcpy(tabl[l], nxt_w, nxt_w_l + 1);
		l++;
	}
	tabl[l] = NULL;
	return (tabl);
}
