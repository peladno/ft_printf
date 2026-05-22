/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:27:03 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/22 21:37:08 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_number(int n)
{
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		count += print_number(num / 10);
	count += print_char((num % 10) + '0');
	return (count);
}
