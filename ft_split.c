/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:24 by thessena          #+#    #+#             */
/*   Updated: 2024/10/17 16:23:04 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s++)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		if (*s == c)
			flag = 0;
	}
	return (count);
}

char	*ft_allocate_word(const char *s, char c)
{
	int			len;
	const char	*start;

	len = 0;
	start = s;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (ft_substr(start, 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		count;

	if (!s)
		return (NULL);
	count = ft_count_words((char *)s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			result[i++] = ft_allocate_word(s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
