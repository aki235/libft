#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		j;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ret[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		ret[j] = s2[i];
		i++;
		j++;
	}
}
