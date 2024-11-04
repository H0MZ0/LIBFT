/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:34:53 by hakader           #+#    #+#             */
/*   Updated: 2024/11/04 11:59:43 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (d == s)
		return (0);
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
		return (d);
	}
	else
		return (ft_memcpy(d, s, len));
}


#include <stdio.h>
#include <string.h>

int main() {
    char buffer[50] = "Hello, world!";

    // Overlapping memory regions
    // Move the last 6 characters to the beginning of the buffer
    ft_memmove(buffer, buffer + 7, 6);
    memmove(buffer, buffer + 7, 6);

    buffer[6] = '\0'; // Null-terminate the string

    // Print the modified buffer
    printf("Modified buffer: %s\n", buffer); // Output: "world!"

    return 0;
}
