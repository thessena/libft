/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:37:41 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 15:46:38 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	*str1;
	char	*str2;
	int		result;

	str1 = "Hello world!";
	str2 = "Hello everyone!";
	result = ft_strncmp(str1, str2, 5);
	printf("Ergebnis des Vergleichs des 5. Zeichen: %d\n", result);
	result = ft_strncmp(str1, str2, 7);
	printf("Ergebnis des Vergleichs des 7. Zeichen: %d\n", result);
	return (0);
}
