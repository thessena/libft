/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:01:51 by thessena          #+#    #+#             */
/*   Updated: 2024/10/10 15:34:36 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*tem_dst;
	char	*tem_src;
	int		i;

	if (!dst && !src)
		return (NULL);
	tem_dst = (char *)dst;
	tem_src = (char *)src;
	i = 0;
	while (i > 0)
	{
		tem_dst[i] = tem_src[i];
		i++;
	}
	return (dst);
}
