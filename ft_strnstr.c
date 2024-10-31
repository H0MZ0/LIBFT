/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:53:39 by hakader           #+#    #+#             */
/*   Updated: 2024/10/31 16:09:26 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_big;
	size_t	len_lit;

	i = 0;
	j = 0;
	len_big = strlen(big);
	len_lit = strlen(little);
	if (len_lit == 0 || len_lit == NULL
		|| len_lit > len_big)
		return (NULL);
	while (big[i])
	{
		if (big[i] == little[j])
			j++;
		i++;
	}
	if (little[j] == '\0')
		return (little);
	else
		return (NULL);
}
