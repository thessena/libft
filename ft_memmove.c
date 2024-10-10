/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:08:04 by thessena          #+#    #+#             */
/*   Updated: 2024/10/10 16:34:53 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;

	if (!dst && !src)
		return (NULL);
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	if (temp_dst < temp_src)
	{
		while (len--)
		{
			*(temp_dst++) = *(temp_src++);
		}
	}
	else
	{
		temp_dst += len;
		temp_src += len;
		while (len--)
		{
			*(--temp_dst) = *(--temp_src);
		}
	}
	return (dst);
}
