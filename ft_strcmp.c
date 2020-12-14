/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <ddraco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 20:37:08 by ddraco            #+#    #+#             */
/*   Updated: 2020/12/14 20:37:10 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((*ss1 != '\0' || *ss2 != '\0'))
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