#include "libft.h"

void	ft_putstr(char const *cad)
{
	if (cad)
		write(1, cad, ft_strlen(cad));
}
