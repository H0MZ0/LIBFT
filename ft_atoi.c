/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:37:07 by hakader           #+#    #+#             */
/*   Updated: 2024/10/22 17:55:09 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int atoi(const char *str)
{
	int	i;
	int	sign;
	char	dst;

	i = 0;
	sign = -1;
	while (str[i])
	{
		dst[i] = src[i];
	}
	dst[i] = '\0';
	i = 0; 
	while (dst[i] == ' ' || dst[i] == '	')
	{
		i++;
	}
	while (dst[i] == '+' || dst[i] == '-')
	{
		if (dst[i] == '-')
			dst[i] *= sign;
		i++;
	}
	while (dst[i] >= '0' && dst[i] <= '9')
	{
		dst[i] += 48;
		i++;
	}
	return (dst);
}

#include <stdio.h>
int main()
{
	printf("%d", atoi("0"));
}
