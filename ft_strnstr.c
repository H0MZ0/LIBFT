/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:53:39 by hakader           #+#    #+#             */
/*   Updated: 2024/11/03 13:15:50 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
