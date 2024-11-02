/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:11:25 by hakader           #+#    #+#             */
/*   Updated: 2024/10/31 19:18:56 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	ft_swap(char *s)
{
	char	tmp;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(s);
	while (i > k)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i++;
		k--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*aloc;
	int		len_n;
	int		k;
	int		i;

	k = n;
	i = 0;
	len_n = ft_len(n);
	aloc = malloc((len_n + 1) * sizeof(char *));
	if (!aloc)
		return (NULL);
	if (k == 0)
		aloc[0] = '0';
	if (k < 0)
		aloc[0] = '-';
		k *= -1;
		i = 1;
	if (k > 0)
		while (i <= len_n)
		{
			aloc[i] = k + 48;
			i++;
		}
	aloc = ft_swap(aloc);
	aloc[len_n + 1] = '\0';
	return (aloc);
}
