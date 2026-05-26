/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:08:58 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/26 20:51:09 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char format, va_list args)
{
	if (format == 'c')
		return (print_char(va_arg(args, int)));
	else if (format == 's')
		return (print_string(va_arg(args, char *)));
	else if (format == 'p')
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
	return (-1);
}

static int	end_error(va_list args)
{
	va_end(args);
	return (-1);
}

static int	add_written(int *count, int written)
{
	if (written == -1)
		return (-1);
	*count += written;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		written;

	if (!format)
		return (-1);
	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (end_error(args));
		if (format[i] == '%')
			written = print_format(format[++i], args);
		else
			written = print_char(format[i]);
		if (add_written(&count, written) == -1)
			return (end_error(args));
		i++;
	}
	va_end(args);
	return (count);
}
