#include "libft.h"

int	ft_isdigit(int d)
{
	if ('0' <= d && d <= '9')
		return (1);
	else
		return (0);
}
