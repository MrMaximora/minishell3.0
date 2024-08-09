/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:23:35 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 17:48:42 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;

	if (!nmemb || !size)
	{
		alloc = malloc(0);
		if (!alloc)
			return (NULL);
		return (alloc);
	}
	if ((nmemb >= 2147483647 || size >= 2147483647) || \
		(nmemb * size > 2147483647))
		return (NULL);
	alloc = (void *)malloc(nmemb * size);
	if (!alloc)
		return (NULL);
	ft_bzero(alloc, nmemb * size);
	return (alloc);
}
