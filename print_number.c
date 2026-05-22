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
/*   Updated: 2026/05/22 20:15:35 by jperez-u         ###   ########.fr       */
=======
/*   Updated: 2026/05/21 20:31:03 by jperez-u         ###   ########.fr       */
>>>>>>> 0ac2918 (merge with 42 repo)
=======
/*   Updated: 2026/05/21 21:14:45 by jperez-u         ###   ########.fr       */
=======
/*   Updated: 2026/05/21 20:31:03 by jperez-u         ###   ########.fr       */
>>>>>>> a9444da (print unsigned number)
>>>>>>> cc7e0f6 (done)
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
