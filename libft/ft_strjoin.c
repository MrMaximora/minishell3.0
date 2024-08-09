/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:12:14 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 11:02:41 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char *src, char *f_str)
{
	size_t	pos;
	size_t	lendest;

	pos = 0;
	lendest = ft_strlen(dest);
	while (dest[pos])
	{
		f_str[pos] = dest[pos];
		pos++;
	}
	pos = 0;
	while (src[pos])
	{
		f_str[lendest + pos] = src[pos];
		pos++;
	}
	f_str[lendest + pos] = '\0';
	return (f_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	new_s_len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	new_s_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(*str) * new_s_len);
	if (!str)
		return (NULL);
	str = ft_strcat((char *)s1, (char *)s2, str);
	return (str);
}
