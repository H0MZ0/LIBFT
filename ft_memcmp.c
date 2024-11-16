/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:37:47 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 09:30:54 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while (i < n)
	{
		if ((int)ptr[i] != ptr1[i])
			return (ptr[i] - ptr1[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_memcmp("abcdef", "abc\375xx", 5));
// }