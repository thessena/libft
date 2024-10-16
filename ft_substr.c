/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:49:25 by thessena          #+#    #+#             */
/*   Updated: 2024/10/17 13:04:15 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc((len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s [i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
