/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:05:23 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 14:37:51 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char sep)
{
	size_t	nword;

	nword = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
			nword++;
		while (*s != sep && *s)
			s++;
	}
	return (nword);
}

static void	*ft_free(char **array, size_t i)
{
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
	return (NULL);
}

static char	**ft_split2(char const *s, char c, char **array)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			array[i] = ft_substr(s, 0, len);
			if (!array[i])
				return (ft_free(array, i));
			i++;
			s += len;
		}
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = ft_split2(s, c, array);
	return (array);
}
