/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddraco <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 02:53:02 by ddraco            #+#    #+#             */
/*   Updated: 2020/05/22 02:53:04 by ddraco           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*newlist;
	t_list		*header;

	if (!lst || !f || !del)
		return (NULL);
	if (!(newlist = ft_lstnew(f(lst->content))))
		return (NULL);
	header = newlist;
	while (lst)
	{
		if (lst->next)
		{
			if (!(newlist->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&header, del);
				return (NULL);
			}
			newlist = newlist->next;
		}
		lst = lst->next;
	}
	newlist->next = NULL;
	return (header);
}
