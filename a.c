#include "libft.h"
#include "ctype.h"
#include <string.h>


int main(void)
{
	char s[20] = "xaaaaxaaaaxxax";
	char c = 'x';

	/*
	int i = 0;
	while (s[i])
	{
		printf("%c: %p\n", s[i], &s[i]);
		i++;
	}
	*/
	printf("ans: %p\n", strrchr(s, c));
	printf("ft : %p\n", ft_strrchr(s, c));
}
