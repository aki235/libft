/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:44:55 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:44:58 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	else
		return (nbr);
}

void	ft_strrev(char *str)
{
	int		i;
	char	tmp;
	int		l;

	i = 0;
	l = ft_strlen(str);
	while (i < l / 2)
	{
		tmp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;
}
*/

int	ft_intlen(int n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	ft_strrev(char *str)
{
	int		i;
	char	tmp;
	int		l;

	i = 0;
	l = ft_strlen(str);
	while (i < l / 2)
	{
		tmp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = tmp;
		i++;
	}
}

char	*ft_itoa_p(int n)
{
	char	*str;
	char	*str2;

	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!str)
		return (NULL);
	str2 = str;
	while (n >= 10)
	{
		*str2 = '0' + (n % 10);
		str2++;
		n /= 10;
	}
	*str2 = '0' + n;
	str2++;
	*str2 = '\0';
	ft_strrev(str);
	return (str);
}

char	*ft_itoa_n(int n)
{
	char	*str;
	char	*str2;

	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 2));
	if (!str)
		return (NULL);
	*str = '-';
	str++;
	str2 = str;
	while (n >= 10)
	{
		*str2 = '0' + (n % 10);
		str2++;
		n /= 10;
	}
	*str2 = '0' + n;
	str2++;
	*str2 = '\0';
	ft_strrev(str);
	str--;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str_intmin;

	str_intmin = "-2147483648";
	if (n >= 0)
		return (ft_itoa_p(n));
	if (n == -2147483648)
		return (str_intmin);
	return (ft_itoa_n(n * (-1)));
}

/*
int main(void)
{
    int     i;
    char    *s;

    i = -2147483648;
    s = ft_itoa(i);
    printf("%s", s);
}
*/