/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:08:43 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 18:38:42 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitcounter(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_putdigits(int len, long num, char *str)
{
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	else
	{
		while (num != 0)
		{
			len--;
			str[len] = (num % 10) + '0';
			num = num / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;
	int		i;

	len = ft_digitcounter(n);
	num = n;
	i = 0;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[i++] = '-';
		num = -num;
	}
	ft_putdigits(len, num, str);
	return (str);
}
