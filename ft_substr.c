/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:36:54 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 09:08:59 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aloc;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, sizeof(char)));
	if (s_len - start < len)
		len = s_len - start;
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
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_substr(NULL, 1, 9));
// }