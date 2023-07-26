#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	size_t i;

	if (!dst || !src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
