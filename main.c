/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:41:33 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 19:25:12 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int printf_return;

	int	number = 5;
	printf_return = ft_printf(
		"Char: '%c'\n\
And a string: '%s'\n\
Pointer: %p\n\
Number d: %d\n\
Number i: %i\n\n",
		'5',
		"hehe",
		&number,
		number,
		number
	);

	printf("ft_printf returned %d\n", printf_return);
	printf("Pointer: %p\n", &number);
	return (0);
}
