/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:41:38 by hakader           #+#    #+#             */
/*   Updated: 2024/10/29 12:10:29 by hakader          ###   ########.fr       */
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
	size_t	k;
	size_t	s1_len;
	size_t	aloc_len;
	unsigned char	*aloc;

	i = 0;
	s1_len = ft_strlen(s1);
	if (s1[0] == NULL 
		|| (ft_strchr(s1, set[i])) == NULL)
		return (NULL);
	if (set[0] == NULL)
		return (s1);
	if (s1[i])
	{
		while (ft_strchr(set, s1[i]) == NULL)
			i++;
		while (ft_strchr(set, s1[i] == s1[i]))
			i++;
	}
	if (s1_len > 0)
	{
		while (ft_strchr(set, s1[s1_len]) == NULL)
			s1_len--;
		while (ft_strchr(set, s1[s1_len]) == s1[s1_len])
			s1_len--;
	}
	if (i >= s1_len)
		return (s1);
	aloc_len = s1_len - i;
	aloc = malloc(sizeof(aloc_len));
	k = 0;
	while (i <= s1_len)
	{
		aloc[k] = s1[i];
		i++;
		k++;
	}
	aloc[k] = '\0';
	return(aloc);
}
