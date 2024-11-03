/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:36:54 by hakader           #+#    #+#             */
/*   Updated: 2024/11/03 13:12:19 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	s1;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len > len)
	{
		while (s[len])
		{
			s1[i] = s[len];
			len++;
			i++;
		}
	}
	return (s);
}
