/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bounus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:37:46 by hakader           #+#    #+#             */
/*   Updated: 2024/11/09 22:36:40 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;
    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
