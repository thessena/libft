/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:38:06 by thessena          #+#    #+#             */
/*   Updated: 2024/10/07 17:35:49 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}

int	main(void)
{
	int		len;
	char	c1;
	char	c2;
	char	c3;

	len = ft_strlen("asdf");
	c1 = 'A';
	c2 = 'g';
	c3 = '5';
	printf("%i\n", len);
	printf("%c %d\n", c1, ft_isalpha(c1));
	printf("%c %d\n", c2, ft_isalpha(c2));
	printf("%c %d\n", c3, ft_isalpha(c3));
	return (0);
}
