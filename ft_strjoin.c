/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:16:17 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 21:17:28 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_nul(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	return ((char *)s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*aloc;

	if (!s1 || !s2)
		return (check_nul(s1, s2));
	aloc = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!aloc)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		aloc[i] = ((char *)s1)[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		aloc[i + j] = ((char *)s2)[j];
		j++;
	}
	aloc[i + j] = '\0';
	return (aloc);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_strjoin("hello", "world!"));
// }