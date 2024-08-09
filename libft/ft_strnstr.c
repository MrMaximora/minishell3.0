/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:23:53 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 18:48:42 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	pos;
	size_t	find;

	pos = 0;
	if (ft_strlen(to_find) == 0)
		return ((char *)str);
	while (pos < len && str[pos])
	{
		find = 0;
		while (str[pos + find] == to_find[find] && str[pos + find] \
			&& (pos + find) < len)
		{
			find++;
		}
		if (to_find[find] == '\0')
			return ((char *)&str[pos]);
		pos++;
	}
	return (NULL);
}
