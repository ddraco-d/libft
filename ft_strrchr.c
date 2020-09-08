/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:12:53 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:12:55 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *ss;

	ss = (char *)s + ft_strlen(s);
	while (ss >= s)
	{
		if (*ss == (char)c)
			return (ss);
		ss--;
	}
	return (NULL);
}
