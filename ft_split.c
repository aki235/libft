#include "libft.h"

int how_many_c(char const *s, char c)
{
    int res;
    int i;

    res = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            res++;
        i++;
    }
    return (res + 2);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int     start;
    int     end;
    int     i;

    res = (char**)malloc(sizeof(char*) * how_many_c(s, c));
    if (!res)
        return (NULL);
    end = 0;
    i = 0;
    while (1)
    {
        while (s[start] == c && s[start] != '\0')
            start++;
        end = start;
        while (s[end] != c && s[start] != '\0')
            end++;
        res[i] = ft_substr(s, start, end - start);
        i++;
        if (end == ft_strlen(s))
            break;
    }
    res[i] = 0;
    return (res);
}


int main(void)
{
    char **split;
    char const *s = "abcxxpqrx123";
    char c  = 'x';
    
    split = ft_split(s, c);
    /*
    printf("hello");
    for (int i = 0; split[i]; i++)
    {
        printf("%s\n", split[i]);
    }
    */
   printf("%d", how_many_c(s, c));
   //printf("%s", ft_substr(s, 1, 3));
}