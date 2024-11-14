/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:12:42 by hakader           #+#    #+#             */
/*   Updated: 2024/11/14 18:15:24 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	while (!lst)
	{
		new = (t_list *)malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(new, del);
			return (NULL);
		}
		new->content = f(lst->content);
		ft_lstadd_front(lst, new);
		lst = lst->next;
	}
	return (new);
}
