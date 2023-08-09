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
	while (((char *)buf1)[i] && ((char *)buf2)[i] && i < n)
	{
		if (((char *)buf1)[i] == ((char *)buf2)[i])
			return (((char *)buf1)[i] - ((char *)buf2)[i]);
		i++;
	}
	if (i < n)
		return (((char *)buf1)[i] - ((char *)buf2)[i]);
	return (0);
}
