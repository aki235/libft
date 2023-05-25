#include "header.h"

char  *ft_strrchr(char *s, int c)
{
  int i;
  
  i = ft_strlen(s) - 1;
  if (i < 0)
    return (NULL);
  while (i >= 0)
  {
    if (s[i] == c)
      return (&s[i]);
    else
      i--;
  }
  return (NULL);
}
