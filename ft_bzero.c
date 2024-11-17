/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:30:41 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 09:43:54 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// int main()
// {
// 	int n = 999;
// 	char *p = (char *)&n;
// 	ft_bzero(p, sizeof(p));
// 	printf("%d", p);
// }