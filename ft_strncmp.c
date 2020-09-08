/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:12:29 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:12:32 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((*ss1 != '\0' || *ss2 != '\0') && n--)
	{
		if (*ss1 > *ss2)
			return (*ss1 - *ss2);
		if (*ss2 > *ss1)
			return (*ss1 - *ss2);
		ss2++;
		ss1++;
	}
	return (0);
}
