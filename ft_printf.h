/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:26:39 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/22 20:48:08 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdarg.h"
# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

int	ft_printf(const char *format, ...);
int	print_format(char format, va_list args);
int	print_char(int c);
int	print_string(char *str);
int	print_pointer(void *ptr);
int	print_hex(unsigned int num, const char spec);
int	print_number(int number);
int	print_unsigned(unsigned int number);

#endif
