/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:22:36 by hakader           #+#    #+#             */
/*   Updated: 2024/11/03 10:27:45 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_swap(char *s)
{
	char	tmp;
	int		i;
	int		k;

	i = 0;
	k = strlen(s) - 1;
	while (i < k)
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
	aloc = malloc((len_n + 2)) * sizeof(char));
	if (!aloc)
		return (NULL);
	if (k == 0)
		aloc[i++] = '0';
	if (k < 0)
	{
		aloc[0] = '-';
		k = -k;
		i = 1;
	}
	while (k > 0)
	{
		aloc[i++] = (k % 10) + '0';
		k = k / 10;
	}
	aloc[i] = '\0';
	if (n < 0 || n > 0)
		aloc = ft_swap(aloc + (n < 0)) - (n < 0);
	return (aloc);
}
