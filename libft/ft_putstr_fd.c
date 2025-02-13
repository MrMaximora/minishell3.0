/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:48:54 by maxouvra          #+#    #+#             */
/*   Updated: 2023/12/19 13:04:02 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	pos;

	pos = 0;
	if (!s)
		return ;
	while (s[pos])
	{
		write(fd, &s[pos], 1);
		pos++;
	}
}
