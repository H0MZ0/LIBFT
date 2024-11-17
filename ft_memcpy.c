/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:23:38 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 09:45:30 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;	

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return ((void *)0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
// #include <stdio.h>

// int main()
// {
// 	char *src = "hello";
// 	char dest[10];
// 	ft_memcpy(dest, src, 1);
// 	printf("%s", dest);
// }