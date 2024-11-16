/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:29:04 by hakader           #+#    #+#             */
/*   Updated: 2024/11/15 18:54:36 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	src;
	unsigned char	*dst;

	i = 0;
	src = (unsigned char)c;
	dst = (unsigned char *)s;
	while (i < n)
	{
		dst[i] = src;
		i++;
	}
	return (s);
}
// #include <stdio.h>

// int main()
// {
// 	int n = 22;
// 	char *p = (char *)&n;
// 	ft_memset(p, 197, 1);
// 	ft_memset(p+1, 252, 1);
// 	ft_memset(p+2, 255, 2);
// 	printf("%d", n);
// }