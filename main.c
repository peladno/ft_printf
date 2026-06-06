/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-u <jperez-u@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 21:43:50 by jperez-u          #+#    #+#             */
/*   Updated: 2026/06/06 19:16:12 by jperez-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <errno.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

// make
// cc -Wall -Wextra -Werror main.c libftprintf.a -o test
// ./test

int	main(void)
{
	int count1;
	int count2;
	int x;
	char *str;

	x = 42;
	str = "Hola Mundo";

	printf("======== CHAR ========\n");
	count1 = ft_printf("mine: %c\n", 'A');
	count2 = printf("real: %c\n", 'A');
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== STRING ========\n");
	count1 = ft_printf("mine: %s\n", str);
	count2 = printf("real: %s\n", str);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== STRING NULL ========\n");
	count1 = ft_printf("mine: %s\n", (char *)NULL);
	count2 = printf("real: %s\n", (char *)NULL);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== POINTER ========\n");
	count1 = ft_printf("mine: %p\n", &x);
	count2 = printf("real: %p\n", &x);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== POINTER NULL ========\n");
	count1 = ft_printf("mine: %p\n", NULL);
	count2 = printf("real: %p\n", NULL);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== DECIMAL ========\n");
	count1 = ft_printf("mine: %d\n", -42);
	count2 = printf("real: %d\n", -42);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== DECIMAL ZERO ========\n");
	count1 = ft_printf("mine: %d\n", 0);
	count2 = printf("real: %d\n", 0);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== INTEGER ========\n");
	count1 = ft_printf("mine: %i\n", 12345);
	count2 = printf("real: %i\n", 12345);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== UNSIGNED ========\n");
	count1 = ft_printf("mine: %u\n", -42);
	count2 = printf("real: %u\n", -42);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== UNSIGNED ZERO ========\n");
	count1 = ft_printf("mine: %u\n", 0);
	count2 = printf("real: %u\n", 0);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== HEX LOWER ========\n");
	count1 = ft_printf("mine: %x\n", 255);
	count2 = printf("real: %x\n", 255);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== HEX LOWER ZERO ========\n");
	count1 = ft_printf("mine: %x\n", 0);
	count2 = printf("real: %x\n", 0);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== HEX UPPER ========\n");
	count1 = ft_printf("mine: %X\n", 255);
	count2 = printf("real: %X\n", 255);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== HEX UPPER ZERO ========\n");
	count1 = ft_printf("mine: %X\n", 0);
	count2 = printf("real: %X\n", 0);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== PERCENT ========\n");
	count1 = ft_printf("mine: %%\n");
	count2 = printf("real: %%\n");
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	printf("======== MIXED ========\n");
	count1 = ft_printf("Char:%c String:%s Int:%d Hex:%x Ptr:%p %%\n", 'Z',
			"test", 42, 255, &x);
	count2 = printf("Char:%c String:%s Int:%d Hex:%x Ptr:%p %%\n", 'Z', "test",
			42, 255, &x);
	printf("mine return: %d\n", count1);
	printf("real return: %d\n\n", count2);

	int ret1, ret2, ret3;

	fprintf(stderr, "=== PRUEBA NORMAL ===\n");

	ret1 = printf("printf:    Hola %d\n", 42);
	ret2 = ft_printf("ft_printf: Hola %d\n", 42);

	fprintf(stderr, "ret printf:    %d\n", ret1);
	fprintf(stderr, "ret ft_printf: %d\n\n", ret2);

	fprintf(stderr, "=== FORZAR ERROR ===\n");

	close(1);

	ret2 = ft_printf("Esto debe fallar\n");
	ret3 = printf("Esto debe fallar2\n");

	fprintf(stderr, "ret ft_printf (error): %d\n", ret2);
	fprintf(stderr, "errno: %d (%s)\n", errno, strerror(errno));

	fprintf(stderr, "ret ft_printf (error): %d\n", ret3);
	fprintf(stderr, "errno: %d (%s)\n", errno, strerror(errno));

	return (0);
}