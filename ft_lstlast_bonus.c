/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:52:49 by hakader           #+#    #+#             */
/*   Updated: 2025/04/22 10:29:48 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
// #include <stdio.h>
// int main()
// {
// 	t_list	*lst;

// 	lst = ft_lstnew("1");
// 	ft_lstadd_back(&lst, ft_lstnew("2"));
// 	ft_lstadd_back(&lst, ft_lstnew("3"));
// 	ft_lstadd_back(&lst, ft_lstnew("4"));
// 	ft_lstadd_back(&lst, ft_lstnew("5"));
// 	printf("%s", (char *)ft_lstlast(lst)->content);
// }