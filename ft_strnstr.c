/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:53:39 by hakader           #+#    #+#             */
/*   Updated: 2024/11/04 15:30:09 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_haystack;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (len_needle == NULL || len_needle > len_haystack)
		return (NULL);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		i++;
	}
	if (needle[j] == '\0')
		return (needle);
	else
		return (NULL);
}
