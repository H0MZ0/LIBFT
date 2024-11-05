/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:20:33 by hakader           #+#    #+#             */
/*   Updated: 2024/11/05 22:56:48 by hakader          ###   ########.fr       */
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
