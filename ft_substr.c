#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  size_t  i;
  size_t  j;
  char    *ret;
  
  i = 0;
  j = 0;
  ret = (char*)malloc(sizeof(*s) * (len + 1));
  //if (!ret)
  while (s[i] != '\0')
  {
    if (i >= start && j < len)
    {
      j++;
      ret[j] = s[i];
    }
    i++;
  }
  ret[j] = '\0';
}
