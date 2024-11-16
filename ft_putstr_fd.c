/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:08:28 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 11:44:57 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("text.txt", O_WRONLY | O_CREAT , 0777);
// 	if (fd == -1)
// 		return (1);
// 	ft_putstr_fd("hello", 1);
// 	close(fd);
// 	return (0);
// }