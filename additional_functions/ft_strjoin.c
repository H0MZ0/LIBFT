/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:16:17 by hakader           #+#    #+#             */
/*   Updated: 2024/10/27 12:39:38 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char  *aloc;
    size_t  totalen;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    totalen = s1_len + s2_len;
    aloc = (char *)malloc(totalen);;
    if (aloc == NULL)
        return (NULL);
    while (i < s1_len)
    {
        aloc[i] = s1[i];
        i++;
    }
    while (j < s2_len)
    {
        aloc[i] = s2[j];
        i++;
        j++;
    }
    aloc[i] = '\0';
    return (aloc);
}