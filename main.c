/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:41:33 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 21:02:03 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int printf_return;
	int	number = 2147483647;
	unsigned int unsigned_number = 3147483647;
	unsigned long hex_number = 255;

	printf_return = ft_printf(
		"Char: '%c'\n\
And a string: '%s'\n\
Pointer: %p\n\
Number d: %d\n\
Number i: %i\n\
Unsigned number u: %u\n\
Lower x: %x\n\
Upper x: %X\n\n",
		'5',
		"hehe",
		&number,
		number,
		number,
		unsigned_number,
		hex_number,
		hex_number
	);

	printf("ft_printf returned %d\n", printf_return);
	printf("Pointer: %p\n", &number);
	return (0);
}
