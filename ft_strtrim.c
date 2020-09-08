/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 01:13:08 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/21 01:13:09 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_symbol(char c, const char *set)
{
	size_t			i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int			get_first_position(const char *str, const char *set)
{
	int				i;

	i = 0;
	while (is_symbol(str[i], set) && str[i])
		i += 1;
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	len;
	char			*begin;
	char			*end;
	int				i;

	if (!s1 || !set)
		return (NULL);
	i = get_first_position(s1, set);
	begin = (char *)&s1[i];
	if ((i = (int)ft_strlen(s1) - 1) != -1)
		while (i >= 0 && is_symbol(s1[i], set))
			i--;
	end = (char *)&s1[i];
	if (!*s1 || begin == end)
		len = 2;
	else
		len = (unsigned int)(end - begin + 2);
	if (!(trim = malloc(sizeof(char) * len)))
		return (NULL);
	ft_strlcpy(trim, begin, len);
	return (trim);
}
