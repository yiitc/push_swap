/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:10:47 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:21:35 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		tmp;
	const unsigned char	*b;

	i = 0;
	tmp = (unsigned char)c;
	b = (const unsigned char *)s;
	while (i < n)
	{
		if (b[i] == tmp)
			return ((void *)&b[i]);
		i++;
	}
	return (NULL);
}
