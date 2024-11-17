/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:41:38 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 17:14:13 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char sep)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != sep && str[i])
			word++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (word);
}

static int	ft_count_alpha(char const *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i])
		i++;
	return (i);
}

static void	ft_free_split(char **split, int i)
{
	int		x;
	char	*place;

	x = 0;
	while (x < i)
	{
		place = split[x];
		free (place);
		x++;
	}
	free(split);
}

static char	**ft_place_it(char const *str, char sep, char **result, int words)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < words)
	{
		while (str[y] == sep && str[y])
			y++;
		result[x] = ft_substr(str, y, ft_count_alpha(&str[y], sep));
		if (!result[x])
		{
			ft_free_split(result, x);
			return (NULL);
		}
		while (str[y] != sep && str[y])
			y++;
		x++;
	}
	result[x] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**aloc;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	aloc = malloc((words + 1) * sizeof(char *));
	if (!aloc)
		return (NULL);
	aloc = ft_place_it (s, c, aloc, words);
	if (!aloc)
	{
		return (NULL);
	}
	return (aloc);
}
