#include "libft.h"

int ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
  size_t i;
  
  i = 0;
  while (i < n)
  {
    if (buf1[i] == buf2[i])
      return (buf1[i] - buf2[i]);
    i++;
  }
  return (0);
}
