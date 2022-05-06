/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:30:47 by uercan            #+#    #+#             */
/*   Updated: 2022/02/20 18:37:04 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*k;

	if (!lst || !f)
		return (NULL);
	l = 0;
	while (lst)
	{
		k = ft_lstnew(f(lst->content));
		if (!k)
		{
			ft_lstclear(&l, del);
			return (0);
		}
		ft_lstadd_back(&l, k);
		lst = lst->next;
	}
	return (l);
}
