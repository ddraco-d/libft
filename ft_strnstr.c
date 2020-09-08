/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:12:44 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:12:45 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (*n)
	{
		while (h[i] != '\0' && len--)
		{
			while (h[i + j] == n[j] && (len - j + 1))
			{
				if (n[j + 1] == '\0')
					return (h + i);
				j++;
			}
			i++;
			j = 0;
		}
		return (NULL);
	}
	return (h);
}
