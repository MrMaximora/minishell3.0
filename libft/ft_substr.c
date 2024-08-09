/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:12:16 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/06 17:48:15 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, size_t len)
{
	size_t	i;

	i = 0;
	while (s[i] && i < len)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	new_s = (char *)malloc(ft_len(s + start, len) + 1 * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (start <= i && j < len)
		{
			new_s[j] = s[i];
			j++;
		}
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
