/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:48:37 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:48:40 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	how_many_c(char const *s, char c)
{
	int	res;
	int	i;

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

char	**ft_malloc_res(char const *s, char c)
{
	char	**res;

	res = (char **)malloc(sizeof(char *) * how_many_c(s, c));
	if (!res)
		return (NULL);
	return (res);
}

void	*ft_split_free(char **res)
{
	char	**res2;

	res2 = res;
	while (*res)
	{
		free(*res);
		res++;
	}
	free(res2);
	return (NULL);
}

char	**ft_split0(char const *s, char c, char **res)
{
	char	**res2;
	int		start;
	int		end;

	res2 = res;
	end = 0;
	while (1)
	{
		start = end;
		while (s[start] == c && s[start] != '\0')
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		if (end == ft_strlen(s))
			break ;
		*res2 = ft_substr(s, start, end - start);
		if (!(*res2))
			return (ft_split_free(res));
		res2++;
	}
	res2++;
	*res2 = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = ft_malloc_res(s, c);
	if (!split)
		return (NULL);
	split = ft_split0(s, c, split);
	if (!split)
		return (NULL);
	return (split);
}

/*
int main(void)
{
    char **split;
    char **f;
    char const *s = "xabxxpqrx34xx";
    //char const *s = "xxxx";
    char c  = 'x';
    
    split = ft_split(s, c);
    f = split;
    while (*split)
    {
        printf("%s\n", *split);
        split++;
    }

    ft_split_free(f);
}
*/
