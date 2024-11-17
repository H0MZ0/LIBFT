/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:54:48 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 11:47:48 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
static void del(void *content)
{
	ft_memset(content, 0, sizeof(t_list));
}
#include <stdio.h>
int main()
{
	t_list	*lst;
	lst = ft_lstnew("salam");
	ft_lstdelone(lst, del);
	printf("%s", lst->content);
}