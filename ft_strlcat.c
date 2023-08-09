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
/*
int main(void)
{
	for (size_t i = 0; i < 15; i++)
	{
		char	src[] = "123456789";
		char	dst[20] = "ABC";
		printf("%zu: %s  %lu /////", i, dst, strlcat(dst, src, i));
		const char	src1[] = "123456789";
		char	dst1[20] = "ABC";
		printf("%zu: %s  %lu\n", i, dst1, ft_strlcat(dst1, src1, i));
	}
}
*/