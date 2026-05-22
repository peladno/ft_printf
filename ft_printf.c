/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:08:58 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/22 22:02:15 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// TODO manage errors

int	print_format(char format, va_list args)
{
	if (format == 'c') // test done
		return (print_char(va_arg(args, int)));
	else if (format == 's') // test done
		return (print_string(va_arg(args, char *)));
	else if (format == 'p') // test done
		return (print_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (print_number(va_arg(args, int)));
	else if (format == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (print_hex(va_arg(args, unsigned int), 'x'));
	else if (format == 'X')
		return (print_hex(va_arg(args, unsigned int), 'X'));
	else if (format == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	i = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += print_format(format[i + 1], args);
			i++;
		}
		else
			count += print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
