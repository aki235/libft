/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:43:23 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:43:26 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_calloc_overflow(size_t count, size_t size)
{
	if (count == 0 || size == 0)
		return (0);
	if (count > SIZE_MAX / size)
		return (1);
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (ft_calloc_overflow(count, size))
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	size_t	a;
	size_t	b;
	
	a = (size_t)SIZE_MAX / 10 + (size_t)1;
	b = (size_t)10;
	printf("%zu", a * b);
}
*/