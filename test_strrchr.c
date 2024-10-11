/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:19:01 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 15:17:11 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char		*str;
	char		ch;
	char		*result;

	str = "Hello, world!";
	ch = 'o';
	result = ft_strrchr(str, ch);
	if (result != NULL)
	{
		printf("Das Zeichen '%c' gefunden: %ld\n", ch, result - str);
	}
	else
	{
		printf("Das Zeichen '%c' wurde nicht gefunden.\n", ch);
	}
	return (0);
}
