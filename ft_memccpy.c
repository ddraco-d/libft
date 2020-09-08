/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:09:05 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:09:07 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	cc;

	cc = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
		if (*(d - 1) == cc)
			return (d);
	}
	return (NULL);
}
