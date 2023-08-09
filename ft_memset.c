#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(buf + i) = (unsigned char)ch;
		i++;
	}
	return (buf);
}
