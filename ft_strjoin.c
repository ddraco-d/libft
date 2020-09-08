/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:11:30 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:11:32 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*rez;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	rez = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (rez != NULL)
	{
		while (s1[i] != '\0')
		{
			rez[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			rez[i + j] = s2[j];
			j++;
		}
		rez[i + j] = '\0';
	}
	return (rez);
}
