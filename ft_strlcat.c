#include "libft.h"

size_t ft_strlcat (char *dst, char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	while (dst[i] != "\0")
		i++;
	if (i < (size - 1) && size > 0)
	{
		j = 0;
		while (src[j] != "\0" && i < (size - 1))
		{
			dst[i] = src[j];
			i++;
		}
		dst[i] = "\0";
	}
	return (i);//reigai
}
