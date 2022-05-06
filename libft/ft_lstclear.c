/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:21:30 by uercan            #+#    #+#             */
/*   Updated: 2022/02/19 16:42:08 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	my_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		l = (*lst)->next;
		my_lstdelone(*lst, del);
		(*lst) = l;
	}
	*lst = NULL;
}
