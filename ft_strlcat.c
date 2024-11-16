/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:36:35 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 12:56:02 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (!dst && !dstsize)
		return (slen);
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
// #include <stdio.h>
// int main()
// {
// 	char s1[20] = "hello";
// 	char *s2 = "wo";
// 	ft_strlcat(s1, s2, 20);
// 	printf("%s", s1);
// }