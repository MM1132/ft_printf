/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:34:21 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 21:00:24 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

const char	LOWERCASE_HEX_BASE[] = "0123456789abcdef";
const char	UPPERCASE_HEX_BASE[] = "0123456789ABCDEF";

int	print_lowercase_hex_format(va_list args)
{
	unsigned long	n;

	n = va_arg(args, unsigned long);
	return (put_lowercase_hex(n));
}

int	print_uppercase_hex_format(va_list args)
{
	unsigned long	n;

	n = va_arg(args, unsigned long);
	return (put_uppercase_hex(n));
}
