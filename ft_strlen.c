/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:59:35 by hakader           #+#    #+#             */
/*   Updated: 2024/10/22 12:01:44 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(char c)
{
	int	x;

	x = 0;
	while (c[x])
	{
		x++;
	}
	return (x);
}
