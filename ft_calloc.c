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

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int    main (void)
{
    long *pMMem;    //for malloc
    long *pCMem;    //for calloc
    long *ftMem;    //for ft_calloc

    pMMem = (long *)malloc (sizeof(long) * 3);
    pCMem = (long *)calloc (3, sizeof(long));
    ftMem = (long *)ft_calloc (3,sizeof(long));

    //確保領域の初期値表示
    printf("malloc [0]:%ld, [1]:%ld, [2]:%ld\n", pMMem[0], pMMem[1], pMMem[2]);
    printf("calloc [0]:%ld, [1]:%ld, [2]:%ld\n", pCMem[0], pCMem[1], pCMem[2]);
    printf("ft_calloc [0]:%ld, [1]:%ld, [2]:%ld\n", ftMem[0], ftMem[1], ftMem[2]);

    free(pMMem);
    free(pCMem);
    free(ftMem);

    return(0);
}
*/