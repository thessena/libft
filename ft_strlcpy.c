/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:39:36 by thessena          #+#    #+#             */
/*   Updated: 2024/10/10 17:13:25 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	len;

	src = (char *)src;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (*src != '\0' && dstsize > 1)
	{
		*(dst++) = *(src++);
		dstsize--;
	}
	*dst = '\0';
	return (len);
}
