/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:34:34 by thessena          #+#    #+#             */
/*   Updated: 2024/10/10 18:10:55 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (*src != '\0' && (len_dst + 1) < dstsize)
	{
		dst[len_dst++] = *(src++);
	}
	dst[len_dst] = '\0';
	return (len_dst + len_src);
}

int main(void)
{
    char dst1[30] = "Hello, ";
    char src1[] = "world!";
    ft_strlcat(dst1, src1, sizeof(dst1)); // 13: "Hello, world!"
	printf("%s\n", dst1);

    char dst2[30] = "Goodbye, ";
    char src2[] = "everyone!";
    ft_strlcat(dst2, src2, sizeof(dst2)); // 17: "Goodbye, everyone!"
	printf("%s\n", dst2);

    char dst3[30] = "Test";
    char src3[] = "123456789";
    ft_strlcat(dst3, src3, 5); // 14: "Test1234567"
	printf("%s\n", dst3);

    char dst4[30] = "Short";
    char src4[] = "";
    ft_strlcat(dst4, src4, sizeof(dst4)); // 5: "Short"
	printf("%s\n", dst4);

    char dst5[30] = "";
    char src5[] = "No destination";
    ft_strlcat(dst5, src5, sizeof(dst5)); // 15: "No destination"
	printf("%s\n", dst5);

    return 0;
}