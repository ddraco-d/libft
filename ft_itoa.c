/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:08:44 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:08:46 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_len(long *n, int *negative)
{
	unsigned int	len;
	long			buf;

	buf = *n;
	len = 1;
	if (*n < 0)
	{
		*negative = 2;
		*n *= -1;
	}
	while (buf /= 10)
		len++;
	return (len);
}

char				*ft_itoa(int n)
{
	char			*res;
	int				negative;
	int				i;
	long			n1;

	negative = 1;
	n1 = (long)n;
	i = get_len(&n1, &negative) + negative;
	if (!(res = (char *)malloc(i)))
		return (NULL);
	res[i - 1] = '\0';
	if (n == 0)
		res[0] = '0';
	while (n1)
	{
		res[i - 2] = n1 % 10 + '0';
		n1 /= 10;
		i--;
	}
	if (negative == 2)
		res[0] = '-';
	return (res);
}
