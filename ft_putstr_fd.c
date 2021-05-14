#include "libft.h"

void	ft_putstr_fd(char *cad, int fd)
{
	write(fd, cad, ft_strlen(cad));
}
