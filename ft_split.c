/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:10:54 by hakader           #+#    #+#             */
/*   Updated: 2024/11/03 13:30:21 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
    char	**aloc;
    size_t	i;
    size_t	j;
    size_t	k;
    size_t	words;
    size_t	len;

    i = 0;
    j = 0;
    k = 0;
    words = count_words(s);
    aloc = (char **)malloc(sizeof(char *) * (words + 1));
    if (!aloc)
        return (NULL);
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            len = 0;
            while (s[i] != c && s[i])
            {
                len++;
                i++;
            }
            aloc[j] = (char *)malloc(sizeof(char) * (len + 1));
            if (!aloc[j])
                return (NULL);
            k = 0;
            while (k < len)
            {
                aloc[j][k] = s[i - len + k];
                k++;
            }
            aloc[j][k] = '\0';
            j++;
        }
    }
    aloc[j] = NULL;
    return (aloc);
}
