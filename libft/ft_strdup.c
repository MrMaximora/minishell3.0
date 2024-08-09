/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:02:55 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/01 09:21:16 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		pos;
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!cpy)
		return (NULL);
	pos = 0;
	while (s[pos] != '\0')
	{
		cpy[pos] = s[pos];
		pos++;
	}
	cpy[pos] = '\0';
	return (cpy);
}
