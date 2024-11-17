/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:48:08 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 10:31:23 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main()
// {
// 	t_list	*lst;
// 	lst = ft_lstnew("you");
// 	ft_lstadd_front(&lst, ft_lstnew("are"));
// 	ft_lstadd_front(&lst, ft_lstnew("hamza"));
// 	ft_lstadd_front(&lst, ft_lstnew("hello"));
// 	printf("%s\n", lst->content);
// 	printf("%s\n", lst->next->content);
// 	printf("%s\n", lst->next->next->content);
// 	printf("%s\n", lst->next->next->next->content);
// }