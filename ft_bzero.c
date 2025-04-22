/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:30:41 by hakader           #+#    #+#             */
/*   Updated: 2025/04/22 10:24:57 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	i = 0;
	dst = (unsigned char *)s;
	if (!s)
		return ;
	while (i < n)
	{
		dst[i] = 0;
		i++;
	}
	return (s);
}
