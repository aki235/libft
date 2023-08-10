#include "libft.h"
#include "ctype.h"
#include <string.h>

int	main(void)
{
	const char s1[20] = "xxabcxxbcxxaaa";
	char c = 'x';

	char **s;
	s = ft_split(s1, c);
	
	for (int i = 0; s[i]; i++)
	{
		printf("%s\n", s[i]);
	}
}
