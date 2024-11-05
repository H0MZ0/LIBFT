/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:16:17 by hakader           #+#    #+#             */
/*   Updated: 2024/11/05 22:56:32 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aloc;
	size_t	totalen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	totalen = ft_strlen(s1) + ft_strlen(s2);
	aloc = (char *)malloc(totalen);
	if (aloc == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		aloc[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		aloc[i] = s2[j];
		i++;
		j++;
	}
	aloc[i] = '\0';
	return (aloc);
}
