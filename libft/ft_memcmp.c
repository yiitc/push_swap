/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:21:36 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:21:37 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*b1;
	const unsigned char	*b2;

	i = 0;
	b1 = (const unsigned char *)s1;
	b2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i + 1 < n && b1[i] == b2[i])
		i++;
	return ((unsigned char)b1[i] - (unsigned char)b2[i]);
}
