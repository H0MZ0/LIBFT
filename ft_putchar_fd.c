/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:08:09 by hakader           #+#    #+#             */
/*   Updated: 2024/11/17 21:03:26 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
// #include <fcntl.h> 
// int main()
// {
//     int fd = open("text.txt", O_WRONLY | O_CREAT, 0777);
//     if (fd == -1)
//         return (1);
//     ft_putchar_fd('h', fd);
//     close(fd);
//     return (0);
// }