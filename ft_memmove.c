/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:20:48 by hakader           #+#    #+#             */
/*   Updated: 2025/04/22 10:34:12 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!src)
		return (NULL);
	if (d == s || len == 0)
		return (dst);
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
		return (d);
	}
	else
		return (ft_memcpy(d, s, len));
}
// #include <stdio.h>
// int main()
// {
// 	char *src = "hello";
// 	char dest[20] = "sfdt";
// 	ft_memcpy(dest, src, 24);
// 	printf("%s", dest);
// }