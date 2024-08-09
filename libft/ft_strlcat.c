/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:34:33 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 18:28:52 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((!src || !dst) && size == 0)
		return (0);
	while (dst[i] && (i < size))
		i++;
	j = i;
	if (size <= i)
		return (i + ft_strlen(src));
	while (src[i - j] && i < (size - 1))
	{
		dst[i] = src[i - j];
		i++;
	}
	dst[i] = '\0';
	return (j + ft_strlen(src));
}
