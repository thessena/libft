/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:57:48 by thessena          #+#    #+#             */
/*   Updated: 2024/10/23 10:48:30 by thessena         ###   ########.fr       */
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
	while (s <= end)
	{
		if (*end == ch)
		{
			return ((char *)end);
		}
		end--;
	}
	return (NULL);
}
