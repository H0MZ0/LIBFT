/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:16:57 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 17:13:04 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
// static void test(unsigned int n, char *p)
// {
//     *p = 'a';
// }
// #include <stdio.h>
// int main()
// {
// 	char p[] = "salam";
// 	ft_striteri(p, test);
// 	printf("%s\n", p);
// 	return 0;
// }