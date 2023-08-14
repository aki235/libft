/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:50:59 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:51:00 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if ((unsigned char)(s1[i]) != (unsigned char)(s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <limits.h>
int	main(void)
{
	char *str = "libft-test-tokyo";
	char *cmp2 = calloc(10, 1);
	strlcpy(cmp2, "libft", 10);
	cmp2[5] = CHAR_MIN;
	int	len = strlen(str);

	printf("ft; %d\n", ft_strncmp(str, cmp2, len));
	printf("original; %d\n", strncmp(str, cmp2, len));
	int n = 5;
	printf("str[%d]:%d cmp2[%d]:%d\n", n, str[n], n, cmp2[n]);
}
*/