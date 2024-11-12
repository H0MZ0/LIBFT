/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:36:54 by hakader           #+#    #+#             */
/*   Updated: 2024/11/12 10:57:43 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aloc;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_calloc(1, sizeof(char)));
	if (i - start < len)
		len = i - start;
	aloc = malloc(len + 1);
	if (!aloc)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		aloc[i] = s[start];
		i++;
		start++;
	}
	aloc[i] = '\0';
	return (aloc);
}
