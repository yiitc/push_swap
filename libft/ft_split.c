/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caisik <caisik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 19:22:36 by caisik            #+#    #+#             */
/*   Updated: 2026/08/28 19:22:37 by caisik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_tabtab_setup(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;
	char			**tabtab;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	tabtab = (char **)malloc(sizeof(char *) * (count + 1));
	if (tabtab == NULL)
		return (NULL);
	tabtab[count] = NULL;
	return (tabtab);
}

static char	**ft_free_tabtab(char	**tabtab)
{
	unsigned int	i;

	i = 0;
	while (tabtab[i] != NULL)
	{
		free(tabtab[i]);
		i++;
	}
	free(tabtab);
	return (NULL);
}

static char	*ft_tabtab_write(char const *s, size_t *i, char c)
{
	unsigned int	start;
	size_t			len;

	start = *i;
	len = 0;
	while (s[start + len] != '\0' && s[start + len] != c)
		len++;
	*i = start + len;
	return (ft_substr(s, start, len));
}

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			count;
	char			**tabtab;

	i = 0;
	count = 0;
	if (s == NULL)
		return (NULL);
	tabtab = ft_tabtab_setup(s, c);
	if (tabtab == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			tabtab[count] = ft_tabtab_write(s, &i, c);
			if (tabtab[count] == NULL)
				return (ft_free_tabtab(tabtab));
			count++;
		}
		else
			i++;
	}
	return (tabtab);
}
