/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:08:31 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 12:39:59 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	c;

	c = 'A';
	printf("Die Eingabe ist: %c\n", c);
	c = ft_tolower(c);
	printf("Das Ergebnis ist: %c\n", c);
	return (0);
}
