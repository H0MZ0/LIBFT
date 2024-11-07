/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:46:03 by hakader           #+#    #+#             */
/*   Updated: 2024/11/07 20:22:03 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	slen;
	char	*s1 = NULL;

	i = 0;
	slen = ft_strlen(s);
	while (s[slen])
	{
		if (s[slen] == c)
		{
			while (slen >= i)
			{
				s1[i] = *(((char *)s + slen));
				i++;
				slen--;
			}
			if (slen <= i)
				return (s1);
		}
		slen--;
	}
	return (NULL);
}
