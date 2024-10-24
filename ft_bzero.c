/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:30:41 by hakader           #+#    #+#             */
/*   Updated: 2024/10/24 09:46:41 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i] && n > 0)
	{
		s[i] = 48;
		i++;
	}
}
