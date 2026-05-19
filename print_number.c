/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 21:55:27 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/19 22:25:24 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// CHECK putnbr????
int	print_number(int number)
{
	char	*str;
	int		count_printed;

	str = ft_itoa(number);
	count_printed = print_string(str);
	free(str);
	return (count_printed);
}
