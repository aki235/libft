/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:45:29 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:45:31 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)buf1)[i] && ((unsigned char *)buf2)[i] && i < n)
	{
		if (((unsigned char *)buf1)[i] == ((unsigned char *)buf2)[i])
			return (((unsigned char *)buf1)[i] - ((unsigned char *)buf2)[i]);
		i++;
	}
	if (i < n)
		return (((unsigned char *)buf1)[i] - ((unsigned char *)buf2)[i]);
	return (0);
}
//返り値が違う