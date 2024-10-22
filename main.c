/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:41:33 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 13:56:00 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int printf_return;

	int	number = 5;
	printf_return = ft_printf("Char: '%c'\nAnd a string: '%s'\nPointer: %p\n\n",
		'5',
		"hehe",
		&number
	);

	printf("Pointer: %p\n", &number);
	return (0);
}
