#include "libft.h"

int	ft_isprint(int c)
{
	if (33 <= c && c <= 126)
		return (1);
	else
		return (0);
}
