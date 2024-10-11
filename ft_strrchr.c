/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:57:48 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 15:25:56 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*end;

	ch = (char)c;
	end = s;
	while (*end)
	{
		end++;
	}
	while (end >= s)
	{
		if (*end == ch)
		{
			return ((char *)end);
		}
		end--;
	}
	return (NULL);
}
