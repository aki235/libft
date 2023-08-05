#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = start;
	j = 0;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	while (s[i] != '\0')
	{
		if (j >= len)
			break ;
		ret[j] = s[i];
		i++;
		j++;
	}
	ret[j] = '\0';
	return (ret);
}
//test
/*
#include <stdio.h>
int main(void)
{
  char  *s = "abcdefghij";
  int   start = 2;
  int   len = 1;
  printf("%s\n", ft_substr(s, start, len));
  printf("%s\n", ft_substr2(s, start, len));
}
*/
