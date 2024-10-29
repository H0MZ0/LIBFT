/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:15:58 by hakader           #+#    #+#             */
/*   Updated: 2024/10/29 12:15:58 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_itoa(int n)
{
	size_t	len;
	size_t	k;
	int	i;
	char	*aloc;

	len = 0;
	k = n;
	while (k != 0)
	{
		k = k / 10;
		len++;
	}
	aloc = malloc(char * len);
	

}
