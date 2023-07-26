#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int l;

    l = ft_strlen(s);
    if (!s)
        return ;
    write(fd, s, l);
}
