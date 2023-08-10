#include "libft.h"
#include "ctype.h"
#include <string.h>

int	main(void)
{
	int		i;
	char	*s;

	i = -99999;
	s = ft_itoa(i);
	printf("%s", s);
}
