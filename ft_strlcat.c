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
	int	i;
	int	j;

	i = 0;
	while (dst[i] != "\0")
		i++;
	if (i < (size - 1) && size > 0)
	{
		j = 0;
		while (src[j] != "\0" && i < (size - 1))
		{
			dst[i] = src[j];
			i++;
		}
		dst[i] = "\0";
	}
	return (i);
}
