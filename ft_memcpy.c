/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:23:38 by hakader           #+#    #+#             */
/*   Updated: 2024/11/04 12:45:27 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;	

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (!n)
		return (d);
	if (!s || !d)
		return (NULL);
	if (i <= n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
