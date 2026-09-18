/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:23:22 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:23:24 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;

	if (count != 0)
		if (size > (size_t)(-1) / count)
			return (NULL);
	if (count * size == 0)
		return (ft_strdup(""));
	b = malloc(count * size);
	if (b == NULL)
		return (NULL);
	ft_bzero(b, count * size);
	return (b);
}
