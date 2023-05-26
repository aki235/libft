#include "libft.h"

char  *strdup(const char *s)
{
  char  *ret;
  int   i;
  
  ret = (char *)malloc(sizeof(char) * ft_strlen(s));
  while (s[i] != '\0')
  {
    ret[i] = s[i];
    i++;
  }
  ret[i] = '\0';
  return (ret);
}
