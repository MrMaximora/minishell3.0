/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxouvra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:36:04 by maxouvra          #+#    #+#             */
/*   Updated: 2023/11/07 11:09:13 by maxouvra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	all_digits(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_cvt_int(int digit, int limit, char *cvt_int, unsigned int nbr)
{
	while (limit < digit)
	{
		cvt_int[digit - 1] = nbr % 10 + '0';
		nbr /= 10;
		digit--;
	}
}

char	*ft_itoa(int n)
{
	char			*convert_int;
	int				digit;
	int				limit;
	unsigned int	nbr;

	limit = 0;
	digit = all_digits(n);
	convert_int = (char *)malloc(sizeof(char) * (digit + 1));
	if (!convert_int)
		return (NULL);
	nbr = n;
	if (n < 0)
	{
		convert_int[0] = '-';
		limit = 1;
		nbr = -n;
	}
	ft_cvt_int(digit, limit, convert_int, nbr);
	convert_int[digit] = '\0';
	return (convert_int);
}
