/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:51:14 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:51:16 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (big[i])
	{
		if (big[i] == little[j] && i < len)
			j++;
		else
			j = 0;
		i++;
		if (little[j] == '\0')
			return ((char *)(big + i - j));
	}
	return (NULL);
}
/*
int main(void)
{
	char s1[20] = "abc1xyz11xy";
	char s2[20] = "1xy";
	size_t n = 20;

	for (int i = 0; i < strlen(s1); i++)
		printf("s1: %p\n", &s1[i]);
	for (int i = 0; i < strlen(s2); i++)
		printf("s2: %p\n", &s2[i]);

	printf("%p\n", strnstr(s1, s2, n));
	printf("%p\n", ft_strnstr(s1, s2, n));
}*/