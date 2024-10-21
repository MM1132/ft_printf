/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_format_specifier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreimann <rreimann@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:49:08 by rreimann          #+#    #+#             */
/*   Updated: 2024/10/21 18:40:48 by rreimann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static int	is_valid_format_char(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%');
}  

static t_format_specifier	*parse_format_specifier(char *s, int len)
{
	t_format_specifier	*format_specifier;

	format_specifier = (t_format_specifier *)malloc(sizeof(t_format_specifier));
	if (format_specifier == NULL)
		return (NULL);
	format_specifier->length = len;
	format_specifier->specifier = s[len - 1];
	format_specifier->str = s;
	return (format_specifier);
}

// Return the index at which the valid format specifier sits at
// Return -1 if format specifier is not accepted
t_format_specifier	*get_format_specifier(const char *s)
{
	int					index;
	t_format_specifier	*format_specifier;
	char				*format_str;

	index = 0;
	if (s[index] == '%')
	{	
		index++;
		while (s[index] != 0)
		{
			if (is_valid_format_char(s[index]))
			{
				format_str = ft_substr(s, 0, index + 1);
				if (format_str == NULL)
					return (NULL);
				format_specifier = parse_format_specifier(format_str, index + 1);
				if (format_specifier == NULL)
				{
					free(format_str);
					return (NULL);
				}
				free(format_str);
				return (format_specifier);
			}
			index++;
		}
	}
	return (NULL);
}
