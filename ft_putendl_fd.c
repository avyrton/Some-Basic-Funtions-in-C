#include "libft.h"

void	ft_putendl_fd(char *cad, int fd)
{
	ft_putstr_fd(cad, fd);
	ft_putchar_fd('\n', fd);
}
