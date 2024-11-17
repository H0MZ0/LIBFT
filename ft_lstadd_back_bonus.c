/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:08:50 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 10:23:55 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}
// #include <stdio.h>
// int main()
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("1");
// 	ft_lstadd_back(&lst, ft_lstnew("2"));
// 	ft_lstadd_back(&lst, ft_lstnew("3"));
// 	ft_lstadd_back(&lst, ft_lstnew("4"));
// 	printf("%s", lst->next->next->next->content);
// }