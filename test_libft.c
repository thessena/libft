/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:08:31 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 11:16:15 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char const *argv[])
{
	int	c;

	c = 97;
	printf("Die Eingabe ist: %c\n", c);
	c = ft_toupper(c);
	printf("Das Ergebnis ist: %c\n", c);
	return (0);
}
