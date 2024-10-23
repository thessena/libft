/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:24 by thessena          #+#    #+#             */
/*   Updated: 2024/10/23 10:05:56 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	*ft_copy_word(const char *start, const char *end)
{
	char	*word;
	char	*ptr;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ptr = word;
	while (start < end)
		*ptr++ = *start++;
	*ptr = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			i;
	const char	*start;

	if (!s)
		return (NULL);
	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i++] = ft_copy_word(start, s);
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
