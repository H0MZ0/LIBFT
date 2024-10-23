/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:36:35 by hakader           #+#    #+#             */
/*   Updated: 2024/10/23 20:55:38 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i])
	{
		i++;
	}
	while (dstsize > 0 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
