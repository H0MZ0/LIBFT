/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:05:52 by hakader           #+#    #+#             */
/*   Updated: 2024/11/07 15:23:47 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s1);
	dest = (char *)malloc(size + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, size);
	dest[size] = '\0';
	return (dest);
}
