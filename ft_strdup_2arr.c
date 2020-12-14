/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_2arr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <ddraco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 20:01:11 by ddraco            #+#    #+#             */
/*   Updated: 2020/12/14 20:09:58 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strdup_2arr(char **arr)
{
	char	**res;
	int		i;
	int		size;

	size = ft_get_2arr_size(arr);
	i = 0;
	res = (char **)malloc(sizeof(char*) * (size + 1));
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		res[i] = ft_strdup(arr[i]);
		i++;
	}
	res[i] = NULL;
	return (res);
}
