/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:02:19 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/21 17:33:51 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stddef.h>
#include <stdarg.h>

// enum						e_format_specifier
// {
// 	CHARACTER = 'c',
// 	STRING = 's',
// 	POINTER = 'p',
// 	DECIMAL = 'd',
// 	INTEGER = 'i',
// 	UNSIGNED_DECIMAL = 'u',
// 	HEXIDECIMAL_LOWERCASE = 'x',
// 	HEXIDECIMAL_UPPERCASE = 'X',
// 	PERCENT_SIGN = '%',
// 	NO_FORMAT = '\0',
// };

typedef struct s_format_specifier
{
	char 	*str;
	int		length;
	char	specifier;
}	t_format_specifier;

typedef struct s_option
{
	int		length;
	char	type;
	int		is_left_aligned;
	int		with_zeroes;
	int		precision;
	int		with_space;
	int		with_sign;
	int		field_width;
}			t_option;

t_format_specifier	*get_format_specifier(const char *s);
int					ft_printf(const char *format, ...);
int					print_character_format(va_list args);
int					print_string_format(va_list args);
int					print_char(char *c);
int					print_str(char *str);

#endif
