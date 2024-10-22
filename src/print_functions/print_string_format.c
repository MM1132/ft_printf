/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:12:23 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/22 21:16:12 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include "libft.h"

int	print_string_format(va_list args)
{
	char	*str;
	int		print_length;

	str = (char *)va_arg(args, char *);
	if (str == NULL)
	{
		str = malloc(5);
		if (str == NULL)
			return (-1);
		ft_strlcpy(str, "(null)", 7);
		print_length = print_str(str);
		free(str);
	}
	else
		print_length = print_str(str);
	if (print_length < 0)
		return (-1);
	return (print_length);
}
