/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:23:38 by hakader           #+#    #+#             */
/*   Updated: 2024/10/24 14:33:00 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memcpy(void *dest, const void *src, size_t n)
{
	const char	*srrc;
	unsigned const char	*dst;
	size_t	len_src;
	size_t	len_dest;
	size_t	i;

	srrc = src;
	dts = dest;
	len_src = strlen(src);
	len_dest = strlen (dest);
	i = 0;
	if (src == NULL && n > 0)
		return (NULL);
	if (len_src > len_dest)
		return (0);
	while (len_src < len_dest && src[i])
	{
		dst[i] = srrc[i];
		i++;
	}
	dest[i] = '\0';
}
