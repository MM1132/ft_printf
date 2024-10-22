/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:35:29 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 19:16:50 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static const char	*HEX_BASE = "0123456789abcdef";

static int	put_nbr_base(unsigned long n, const char *base)
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
		print_err = print_char((char *)&base[n % 16]);
		if (print_err < 0)
			return (-1);
		print_status += print_err;
		return (print_status);
	}
	return (print_char((char *)&base[n % 16]));
}

int	put_hex(unsigned long n)
{
	return (put_nbr_base(n, HEX_BASE));
}

int	put_int(unsigned long n)
{
	return (put_nbr_base(n, "0123456789"));
}
