/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:41:33 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/21 18:29:44 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int printf_return;

	printf_return = ft_printf("Char: '%c'\nAnd a string: '%s'\n",
		'5',
		"hehe"
	);
	printf("ft_printf returned %d\n", printf_return);
	return (0);
}
