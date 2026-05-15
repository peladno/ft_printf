/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 22:09:12 by jperez-u          #+#    #+#             */
/*   Updated: 2026/05/15 20:58:10 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include "stdlib.h"
# include "stdarg.h"
# include "unistd.h"
# include "stdio.h"


int ft_printf(const char *format, ...);


#endif
