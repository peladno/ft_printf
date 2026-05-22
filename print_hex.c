/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 21:17:13 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/22 21:39:38 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int number, const char spec)
{
	char	*base;
	int		count;

	count = 0;
	if (spec == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (number >= 16)
		count += print_hex(number / 16, spec);
	count += print_char(base[number % 16]);
	return (count);
}
