/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:04:31 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/05 14:32:00 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			size;
	char			*new_s;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	new_s = (char *)malloc(size + 1);
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = (*f)(i, (char)s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
