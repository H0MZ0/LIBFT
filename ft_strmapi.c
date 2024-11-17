/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:20:33 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 17:13:13 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aloc;

	if (!s || !f)
		return (NULL);
	i = 0;
	aloc = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aloc)
		return (NULL);
	while (s[i])
	{
		aloc[i] = f(i, s[i]);
		i++;
	}
	aloc[i] = '\0';
	return (aloc);
}
// static char test(unsigned int n, char p)
// {
// 	n = 32;
// 	if (p >= 'a' && p <= 'z')
// 	{
// 		return (p - n);
// 	}
// 	return (p);
// }
// #include <stdio.h>
// int main()
// {
// 	char *p = "hello";
// 	printf("%s", ft_strmapi(p, test));
// }