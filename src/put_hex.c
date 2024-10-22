/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:35:29 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 15:41:22 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static const char	*HEX_BASE = "0123456789abcdef";

int	put_hex(unsigned long n)
{
	int	print_status;
	int	print_err;

	print_status = 0;
	if (n / 16 != 0)
	{
		print_err = put_hex(n / 16);
		if (print_err < 0)
			return (-1);
		print_status += print_err;
		print_err = print_char((char *)&HEX_BASE[n % 16]);
		if (print_err < 0)
			return (-1);
		print_status += print_err;
		return (print_status);
	}
	return (print_char((char *)&HEX_BASE[n % 16]));
}
