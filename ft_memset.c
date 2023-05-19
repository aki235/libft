#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	if (!buf)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)buf)[i] = (char)ch;
		i++;
	}
	return (buf);
}
