/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:09:44 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:09:45 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst || src)
	{
		if (dst < src)
			while (len--)
				*d++ = *s++;
		else
		{
			d = d + len;
			s = s + len;
			while (len--)
				*--d = *--s;
		}
		return (dst);
	}
	else
		return (NULL);
}
