/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:16:17 by hakader           #+#    #+#             */
/*   Updated: 2024/10/26 18:31:06 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>



char *ft_strjoin(char const *s1, char const *s2)
{
    size_t  totalen;
    size_t  aloc;
    size_t  *dest;
    size_t  s1_len;
    size_t  s2_len;

    s1_len = ft_strlen(s1);
    s1_len = ft_strlen(s2);
    totalen = s1_len + s2_len;
    aloc = malloc(char *(totalen));
    if (totalen == NULL)
        return (NULL);
    if(dest[i])
    {

    }
    dest = '\0';
    return (dest);
}