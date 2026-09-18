/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:21:49 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:21:50 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	tmp;

	i = 0;
	tmp = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == tmp)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == tmp)
		return ((char *)&s[i]);
	return (NULL);
}
