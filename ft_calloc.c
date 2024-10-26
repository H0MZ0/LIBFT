/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:58:09 by hakader           #+#    #+#             */
/*   Updated: 2024/10/26 16:05:07 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *calloc(size_t count, size_t size)
{
    size_t  result;
    void*  aloc;

    result = count * size;
    aloc = malloc(result);
    if (aloc == NULL)
        return (NULL);
    if (result > 0)
    {
        ft_bzero(aloc, result);
        return (aloc);
    }
}