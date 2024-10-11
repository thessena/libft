/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:04:02 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 13:17:13 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 
#include "libft.h" 

void	run_test(const char *src, const char *dest_init, size_t dstsize)
{
	char	dest[50];
	size_t	result;

	result = ft_strlcat(dest, src, dstsize);
	strcpy(dest, dest_init);
	printf("src=\"%s\", dest=\"%s\", size=%zu -> ", src, dest_init, dstsize);
	printf("result: %zu, dest: \"%s\"\n", result, dest);
}

int	main(void)
{
	run_test(" World", "Hello", 15);
	run_test("lorem", "Lorem Ipsum ", 15);
	run_test("123", "AB", 2);
	run_test("Test", "", 10);
	run_test("1234567890", "Initial", 20);
	run_test("Hello", "World", 0);
	return (0);
}
