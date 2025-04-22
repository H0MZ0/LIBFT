/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:46:03 by hakader           #+#    #+#             */
/*   Updated: 2025/04/22 10:41:07 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	if (!s)
		return (0);
	s1 = (char *)s;
	i = 0;
	while (s1[i])
		i++;
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i--;
	}
	return (NULL);
}
