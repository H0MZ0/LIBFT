/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:42:36 by hakader           #+#    #+#             */
/*   Updated: 2024/11/12 13:26:53 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(size_t));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int ft_lstsize(t_list *lst)
{
    int i;

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

int main()
{
    t_list  *s;
    
    s = ft_lstnew("hello");
    s->next = ft_lstnew("world");
    s->next->next = ft_lstnew("!");
    
    printf("%d", ft_lstsize(s));

    return 0;
}*/
