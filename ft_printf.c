/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:08:58 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/17 16:58:47 by jperez-u         ###   ########.fr       */
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
	// • %d Prints a decimal (base 10) number.
	// • %i Prints an integer in base 10.
	// • %u Prints an unsigned decimal (base 10) number.
	// • %x Prints a number in hexadecimal (base 16) lowercase format.
	// • %X Prints a number in hexadecimal (base 16) uppercase format.
	// • %% Prints a percent sign
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
	}
	va_end(args);
	return (count);
}

void	test(char *fmt, ...)
{
	va_list	args;

	va_start(args, fmt);
	// everytime va_arg is called, retrun the next value
	// carefull va_arg doesn know how many arg are
	//“default argument promotions”: char and short to int, float to double
	printf("%s\n", va_arg(args, char *));
	printf("%d\n", va_arg(args, int));
	printf("%c\n", va_arg(args, int));
	va_end(args);
}

int	main(void)
{
	test("x", "hola", 42, 'A');
}
