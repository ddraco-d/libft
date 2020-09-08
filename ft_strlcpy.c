/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:11:58 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:12:01 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	size = dstsize;
	i = 0;
	while (src[i] != '\0' && size > 0)
	{
		dst[i] = src[i];
		size--;
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	else if (dstsize > 0)
		dst[i - 1] = '\0';
	return (ft_strlen(src));
}
