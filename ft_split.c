/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:27:24 by thessena          #+#    #+#             */
/*   Updated: 2024/10/23 12:35:34 by thessena         ###   ########.fr       */
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

char	*ft_allocate_word(const char *s, char c)
{
	int			len;
	char		*word;
	int			i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

void	ft_free_all(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

int	ft_assign_word(char **result, char const *s, char c, int i)
{
	result[i] = ft_allocate_word(s, c);
	if (!result[i])
	{
		ft_free_all(result, i);
		return (0);
	}
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
