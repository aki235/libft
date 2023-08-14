/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:50:11 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:50:13 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;

	dst_size = ft_strlen(dst);
	i = dst_size;
	if (i < (size - 1) && size > 0)
	{
		j = 0;
		while (src[j] != '\0' && i < (size - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (size < dst_size)
		return (size + ft_strlen(src));
	return (dst_size + ft_strlen(src));
}


/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;

	dst_size = ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		i++;
	if (i < (size - 1) && size > 0)
	{
		j = 0;
		while (src[j] != '\0' && i < (size - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (size < dst_size)
		return (size + ft_strlen(src));
	return (dst_size + ft_strlen(src));
}
*/

/*
int main(void)
{
	char *src1 = calloc(100, sizeof(char));
	char *src2 = calloc(100, sizeof(char));
	for (int i = 0; i < 99; i++)
	{
		src1[i] = i + 1;
		src2[i] = i + 1;
	}
	char *dst1 = calloc(100, sizeof(char));
	char *dst2 = calloc(100, sizeof(char));

	printf("%lu\n", strlcat(dst1, src1, 10));
	printf("%zu\n", ft_strlcat(dst2, src2, 10));
	int state = 0;
	for (int i = 0; dst1[i] && dst2[i]; i++)
	{
		if (dst1[i] != dst2[i])
		{
			printf("%d %c %c\n", i, dst1[i], dst2[i]);
			state = 1;
			break ;
		}
	}
	printf("state; %d\n", state);
}

*/