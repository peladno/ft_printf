/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:09:12 by jperez-u          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/05/22 20:14:34 by jperez-u         ###   ########.fr       */
=======
<<<<<<< HEAD
/*   Updated: 2026/05/21 21:18:42 by jperez-u         ###   ########.fr       */
=======
/*   Updated: 2026/05/21 20:52:51 by jperez-u         ###   ########.fr       */
>>>>>>> a9444da (print unsigned number)
>>>>>>> c3fc72a (print unsigned number)
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
int	print_hex(unsigned long n);
int	print_number(int number);
int	print_unsigned(unsigned int number);
<<<<<<< HEAD
int	print_nbhex(int number);
=======

>>>>>>> a9444da (print unsigned number)
#endif
