/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 16:46:20 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/17 16:46:21 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	print_pointer(void *ptr)
{
	unsigned long address;
	int count;

	address = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += print_hex(address);
	return (count);
}