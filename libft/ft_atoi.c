/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:36:20 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/02 18:22:29 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	pos;
	int	res;
	int	sign;

	pos = 0;
	res = 0;
	sign = 1;
	while (str[pos] == ' ' || (str[pos] >= 9 && str[pos] <= 13))
		pos++;
	if (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			sign *= -1;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		res = (res * 10) + (str[pos] - '0');
		pos++;
	}
	return (res * sign);
}
