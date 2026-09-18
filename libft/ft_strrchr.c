/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:22:07 by caisik            #+#    #+#             */
/*   Updated: 2026/08/29 17:36:21 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	tmp;

	i = ft_strlen(s);
	tmp = (char)c;
	if (s[i] == tmp)
		return ((char *)&s[i]);
	while (i != 0)
	{
		i--;
		if (s[i] == tmp)
			return ((char *)&s[i]);
	}
	return (NULL);
}
