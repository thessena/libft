/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thessena <thessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:19:01 by thessena          #+#    #+#             */
/*   Updated: 2024/10/11 14:48:08 by thessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    const char *str = "Hello, world!";
    char ch = 'o';

    char *result = ft_strchr(str, ch);
    if (result != NULL) {
        printf("Das Zeichen '%c' wurde gefunden an der Position: %ld\n", ch, result - str);
    } else {
        printf("Das Zeichen '%c' wurde nicht gefunden.\n", ch);
    }

    return 0;
}

