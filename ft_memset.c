/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:29:04 by hakader           #+#    #+#             */
/*   Updated: 2025/04/22 10:25:54 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	unsigned char (*dst), (src);
	src = (unsigned char)c;
	dst = (unsigned char *)s;
	if (!s)
		return ;
	while (i < n)
	{
		dst[i] = src;
		i++;
	}
	return (s);
}
