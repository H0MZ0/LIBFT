/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:02:26 by hakader           #+#    #+#             */
/*   Updated: 2024/10/22 12:10:27 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	toupper(char x)
{
	int	i;

	i = 0;
	while (x[i])
	{
		if (x >= 'a' && x <= 'z')
			x -= 32;
		i++;
	}
	return (x);
}
