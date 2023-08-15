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

	if (!big || ft_strlen(little) == 0)
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

}
*/