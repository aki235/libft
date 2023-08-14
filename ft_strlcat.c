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
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (dst_size <= size - 1 && size > 0)
	{
		while (src[i] && i + dst_size < size - 1)
		{
			dst[i + dst_size] = src[i];
			i++;
		}
		dst[i + dst_size] = '\0';
		return (dst_size + src_size);
	}
	return (size + src_size);
}
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