/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:53:39 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 18:21:35 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack && !len)
		return (0);
	if (to_find[0] == '\0' || to_find == haystack)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == to_find[j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && to_find[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strnstr("hello wrod", "hello", 6));
// }