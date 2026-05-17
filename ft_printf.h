/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:09:12 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/17 16:46:33 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include "stdarg.h"
# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

int		ft_printf(const char *format, ...);
int		print_format(char format, va_list args);
int		print_char(int c);
int		print_string(char *str);
int		print_pointer(void *ptr);
size_t	ft_strlen(char *str);

#endif
