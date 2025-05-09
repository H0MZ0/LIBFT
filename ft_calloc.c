/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:58:09 by hakader           #+#    #+#             */
/*   Updated: 2025/04/22 10:29:56 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*array;

	array = (void *)malloc(count * size);
	if (!array)
		return (NULL);
	ft_bzero(array, (count * size));
	return (array);
}
// #include <stdio.h>
// int main()
// {
// 	size_t	i = 0;
// 	char src[] = "hello";
// 	char *p;
// 	p = ft_calloc(6, sizeof(char));
// 	while (src[i])
// 	{
// 		p[i] = src[i];
// 		i++;
// 	}
// 	p[i] = '\0';
// 	printf("%s", p);
// }