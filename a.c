#include "libft.h"
#include "ctype.h"
#include <string.h>


int main(void)
{
	int *p;
	*p = 123;
	printf("%d", p);
	*(p + 1) = 456;
	//memset(p, 0, 4);
	//printf("%d", *p);
}
