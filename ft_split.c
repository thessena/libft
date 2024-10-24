/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:24 by thessena          #+#    #+#             */
/*   Updated: 2024/10/24 10:10:10 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

int	ft_assign_word(char **result, char const *s, char c, int i)
{
	int		len;
	char	*word;
	int		j;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
	{
		while (i > 0)
			free(result[--i]);
		free(result);
		return (0);
	}
	j = 0;
	while (j < len)
	{
		word[j] = s[j];
		j++;
	}
	word[len] = '\0';
	result[i] = word;
	return (1);
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
			if (!ft_assign_word(result, s, c, i++))
				return (NULL);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
