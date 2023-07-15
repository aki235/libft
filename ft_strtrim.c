#include "libft.h"

int    ft_inchar(char c, char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int     start;
    int     end;
    int     i;
    char    *trim;

    trim = (char *)malloc(sizeof(char));
    if (trim == NULL)
        return (0);
    start = 0;
    while (s1[start] != '\0' && ft_inchar(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_inchar(s1[end - 1], set))
        end--;
    i = start;
    while (i < end)
    {
        trim[i - start] = s1[i];
        i++;
    }
    return (trim);
}