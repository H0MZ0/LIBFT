/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:05:52 by hakader           #+#    #+#             */
/*   Updated: 2024/10/26 16:33:24 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char   *strdup(const char *s1)
{
    size_t  result;
    size_t  s;
    size_t  i;

    result = malloc(char *(s1));
    if (result = NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        s[i] = s1[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}