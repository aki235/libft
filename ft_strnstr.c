#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little == NULL)
		return (big);
	i = 0;
	while (big[i] != '\0')
	{
		if (big[i] == little[j] && i < len)
			j++;
		else
			j = 0;
		i++;
		if (little[j] == '\0')
			return (&big[i - j]);
	}
	return (NULL);
}
