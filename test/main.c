/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 18:30:03 by irhett            #+#    #+#             */
/*   Updated: 2018/03/04 18:58:03 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void foo(char *str) { printf("foo: %s\n", str); }
void bar(char *str) { printf("bar: %s\n", str); }
void baz(char *str) { printf("baz: %s\n", str); }
void nil(char *str) { printf("nil: %s\n", str); }
void zil(char *str) { printf("zil: %s\n", str); }
void wil(char *str) { printf("wil: %s\n", str); }
void wintergatan(char *str) { printf("wintergatan: %s\n", str); }
void win(char *str) { printf("win: %s\n", str); }
void ter(char *str) { printf("ter: %s\n", str); }
void gat(char *str) { printf("gat: %s\n", str); }


void	setup_functions(void)
{
	functions[0] = (void (*)(char *))1;

	functions[1] = foo;
	functions[3] = bar;
	functions[4] = baz;
	functions[5] = nil;
	functions[65] = zil;
	functions[78] = wil;
	functions[9] = wintergatan;
	functions[128] = win;
	functions['s'] = ter;
	functions[69] = gat;
}

void	dispatch(int i, char *str)
{
/*
	printf("%p\n", functions[0]);
	functions[0] = (void (*)(char*))1;
	printf("%p\n", functions[0]);

	printf("%p\n", functions[1]);
	setup_functions();
	printf("%p\n", functions[1]);
*/

	if (!functions[0])
		setup_functions();

	if (functions[i] && i != 0)
		functions[i](str);
	else
		printf("no function %i\n", i);
}

int		main(void)
{
	int		i;

	i = 0;
	while (i < 256)
		dispatch(i++, "I'm a function!");

	return (0);
}
