/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:21:40 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:21:41 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			tmp_i;
	unsigned char	tmp_c;
	unsigned char	*tmp_b;

	tmp_i = 0;
	tmp_c = (unsigned char)c;
	tmp_b = (unsigned char *)b;
	while (tmp_i < len)
	{
		tmp_b[tmp_i] = tmp_c;
		tmp_i++;
	}
	return (b);
}
