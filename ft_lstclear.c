/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 02:52:18 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/22 02:52:20 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buf;

	if (!del || !*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		buf = *lst;
		*lst = buf->next;
		free(buf);
	}
}
