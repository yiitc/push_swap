/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:23:08 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:23:09 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_setup(int n, int *size)
{
	*size = 0;
	if (n < 0)
	{
		(*size)++;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		(*size)++;
	}
	return ((char *)malloc(((*size) + 1)));
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = ft_itoa_setup(n, &size);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n != 0)
	{
		size--;
		str[size] = (char)((n % 10) + '0');
		n = n / 10;
	}
	return (str);
}
