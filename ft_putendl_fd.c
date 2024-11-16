/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:08:16 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 11:48:54 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("text.txt", O_CREAT | O_RDWR , 0777);
// 	if (fd == -1)
// 		return (1);
// 	ft_putendl_fd("hi", 2);
// 	close(fd);
// 	return (0);
// }