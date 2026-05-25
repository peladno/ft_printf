/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:46:20 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/25 20:23:58 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hx(unsigned long n)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		count += print_hx(n / 16);
	count += print_char(base[n % 16]);
	return (count);
}

int	print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (print_string("(nil)"));
	address = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += print_hx(address);
	return (count);
}
