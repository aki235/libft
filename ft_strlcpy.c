#include "libft.h"

size_t ft_strlcpy (char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)//do nothing when n is 0
	{
		while (src[i] != "\0" && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = "\0";
	}
	while (src[i] != "\0")
		i++;
	return (i);
}
