#include <stdio.h>
#include <ctype.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	int	i;

	if (!buf)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)buf)[i] = (char)ch;
		i++;
	}
	return (buf);
}


int main(void)
{
	char *str = "abc";
	ft_memset(str, 'x', 10);
	printf("%s", str);
}