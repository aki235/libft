#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ret;

	ret = (*void)malloc(n * size);
	return (ret);
}
