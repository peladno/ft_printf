/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:27:03 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/22 20:27:04 by jperez-u         ###   ########.fr       */
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
<<<<<<< HEAD
		print_number(num / 10);
=======
<<<<<<< HEAD
		count += print_number(num / 10);
=======
		print_number(num / 10);
>>>>>>> a9444da (print unsigned number)
>>>>>>> cc7e0f6 (done)
	count += print_char((num % 10) + '0');
	return (count);
}
