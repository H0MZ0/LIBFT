/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:51:09 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 14:43:26 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
// 	printf("%d", ft_lstsize(lst));
// }