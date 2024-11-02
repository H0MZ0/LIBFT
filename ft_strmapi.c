/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:20:33 by hakader           #+#    #+#             */
/*   Updated: 2024/11/02 10:15:38 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>	// for testing

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*aloc;

	if (!s || !f)
		return (NULL);
	i = 0;
	aloc = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aloc)
		return (NULL);
	while (i < ft_strlen(s))
	{
		aloc[i] = f(i, s[i]);
		i++;
	}
	aloc[ft_strlen(s)] = '\0';
	return (aloc);
}
