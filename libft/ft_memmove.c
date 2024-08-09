/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:08:16 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 18:06:21 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	if (!dst && !src && size)
		return (NULL);
	ptrd = (unsigned char *)dst;
	ptrs = (unsigned char *)src;
	i = 0;
	if (ptrs < ptrd)
	{
		while (++i <= size)
			ptrd[size - i] = ptrs[size - i];
	}
	else
		while (size-- > 0)
			*(ptrd++) = *(ptrs++);
	return (dst);
}
