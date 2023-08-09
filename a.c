#include "libft.h"
#include "ctype.h"
#include <string.h>


int main(void)
{
	char buf1[20] = "abcdefg";
	char buf2[20] = "abcdefi";
	size_t n = 20;
	printf("%d\n", memcmp(buf1, buf2, n));
	printf("%d\n", ft_memcmp(buf1, buf2, n));
}
