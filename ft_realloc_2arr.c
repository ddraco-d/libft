/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_2arr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <ddraco@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:59:11 by ddraco            #+#    #+#             */
/*   Updated: 2020/12/14 20:07:09 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_realloc_2arr(char **arr, int prev_size, int size)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc((size + 1) * sizeof(char*));
	if (res == NULL)
		return (NULL);
	while (i < prev_size)
	{
		res[i] = ft_strdup(arr[i]);
		free(arr[i]);
		i++;
	}
	while (i < size + 1)
		res[i++] = NULL;
	if (arr && prev_size != 0)
		free(arr);
	return (res);
}
