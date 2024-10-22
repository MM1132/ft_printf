/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:49:21 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 20:50:11 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_lowercase_hex(unsigned long n)
{
	return (put_nbr_base(n, LOWERCASE_HEX_BASE));
}

int	put_uppercase_hex(unsigned long n)
{
	return (put_nbr_base(n, UPPERCASE_HEX_BASE));
}
