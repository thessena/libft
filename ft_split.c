/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:24 by thessena          #+#    #+#             */
/*   Updated: 2024/10/23 12:31:29 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

/* char	*ft_copy_word(const char *start, const char *end)
{
	char	*word;
	int		i;
	int		len;

	if (start >= end)
		return (NULL);
	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
} */

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	size_t	length;

	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				length = ft_strlen(s);
			else
				length = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, length);
			s += length;
		}
	}
	result[i] = NULL;
	return (result);
}

/* 	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_copy_word(start, s);
			if (!result[i])
			{
				while (i >= 0)
				{
					free(result[i]);
					i--;
				}
				free(result);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result); */