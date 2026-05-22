/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2026/05/22 20:17:23 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/22 20:17:24 by jperez-u         ###   ########.fr       */
=======
/*   Created: 2026/05/13 22:09:12 by jperez-u          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/05/21 20:52:51 by jperez-u         ###   ########.fr       */
>>>>>>> 0ac2918 (merge with 42 repo)
=======
/*   Updated: 2026/05/22 20:20:24 by jperez-u         ###   ########.fr       */
>>>>>>> cc7e0f6 (done)
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
>>>>>>> 0ac2918 (merge with 42 repo)
#endif
