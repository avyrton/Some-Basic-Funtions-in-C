#include "libft.h"

void	ft_putchar_fd(char r, int fd)
{
	write(fd, &r, 1);
}
