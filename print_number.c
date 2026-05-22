/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 21:55:27 by jperez-u          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2026/05/22 20:14:50 by jperez-u         ###   ########.fr       */
=======
/*   Updated: 2026/05/22 20:12:03 by jperez-u         ###   ########.fr       */
>>>>>>> c3fc72a (print unsigned number)
=======
/*   Updated: 2026/05/22 20:12:03 by jperez-u         ###   ########.fr       */
=======
/*   Updated: 2026/05/22 20:08:41 by jperez-u         ###   ########.fr       */
>>>>>>> 9b46311 (merge with 42 repo)
>>>>>>> 2eb73d9 (merge with 42 repo)
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
		print_number(num / 10);
	count += print_char((num % 10) + '0');
	return (count);
}
