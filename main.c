/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakader <hakader@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:34:53 by hakader           #+#    #+#             */
/*   Updated: 2024/11/04 18:14:51 by hakader          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_haystack;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (needle == NULL || len_needle == 0 || len_needle > len_haystack)
		return (NULL);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		i++;
	}
	if (needle[j] == '\0')
		return (needle);
	return (NULL);
}

int main() {
    const char *haystack = "Hello, world!";
    const char *needle1 = "world";
    const char *needle2 = "o, w";
    const char *needle3 = "foo"; // Not found
    const char *needle4 = "";     // Empty string

    // Test with needle present in haystack
    char *result1 = strnstr(haystack, needle1, 15);
    char *result2 = strnstr(haystack, needle2, 15);
    
    // Test with needle not present
    char *result3 = strnstr(haystack, needle3, 15);
    
    // Test with an empty needle
    char *result4 = strnstr(haystack, needle4, 15);

    // Output results
    if (result1) {
        printf("Found \"%s\" in haystack: \"%s\"\n", needle1, result1);
    } else {
        printf("\"%s\" not found in haystack\n", needle1);
    }

    if (result2) {
        printf("Found \"%s\" in haystack: \"%s\"\n", needle2, result2);
    } else {
        printf("\"%s\" not found in haystack\n", needle2);
    }

    if (result3) {
        printf("Found \"%s\" in haystack: \"%s\"\n", needle3, result3);
    } else {
        printf("\"%s\" not found in haystack\n", needle3);
    }

    if (result4) {
        printf("Found empty needle in haystack: \"%s\"\n", result4);
    } else {
        printf("Empty needle not found in haystack\n");
    }

    return 0;
}
