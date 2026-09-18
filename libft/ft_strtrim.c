/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:22:09 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:22:12 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[len - 1]) != NULL && len > 0)
		len--;
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (str == NULL)
		return (NULL);
	((char *)ft_memcpy(str, &s1[i], len - i))[len - i] = '\0';
	return (str);
}
