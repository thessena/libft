/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:55:18 by thessena          #+#    #+#             */
/*   Updated: 2024/10/16 16:31:31 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*h;
	const char	*n;
	size_t		left;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len > 0)
	{
		h = haystack;
		n = needle;
		left = len;
		while (*n != '\0' && left > 0 && *h == *n)
		{
			h++;
			n++;
			left--;
		}
		if (*n == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
