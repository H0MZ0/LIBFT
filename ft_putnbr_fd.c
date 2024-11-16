/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:27:47 by hakader           #+#    #+#             */
/*   Updated: 2024/11/16 11:24:27 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 0 && n <= 9)
	{
		ft_putchar_fd(n + '0', fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("text.txt", O_CREAT | O_RDWR , 0777);
// 	ft_putnbr_fd(1234, 1);
// 	if (fd == -1)
// 		return (1);
// 	close(fd);
// 	return (0);
// }