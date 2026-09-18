/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:19:02 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:19:03 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s_len;
	char	*substr;

	i = 0;
	j = (size_t)start;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= j)
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (s_len - j + 1));
	if (substr == NULL)
		return (NULL);
	while (len > 0 && s[j] != '\0')
	{
		substr[i] = s[j];
		i++;
		j++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
