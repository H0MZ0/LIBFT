/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:41:38 by hakader           #+#    #+#             */
/*   Updated: 2024/10/28 12:37:15 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aloc;
	size_t	i;
	size_t	j;
	size_t	s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	if (s1[0] == NULL 
		|| (ft_strchr(s1, set[i])) == NULL)
		return (NULL);
	if (set[0] == NULL)
		return (s1);
	while (s1[i] && s1[i] != set)
	{
		if (ft_strchr(set, s1[i]) == NULL)
			
	}
}
