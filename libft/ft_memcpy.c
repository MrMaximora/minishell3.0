/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:21:57 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 18:08:05 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*dst;
	unsigned char	*src1;

	count = 0;
	if (!src && !dest && n)
		return (NULL);
	dst = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	while (n > count)
	{
		dst[count] = src1[count];
		count++;
	}
	return (dest);
}
