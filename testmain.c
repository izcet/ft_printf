/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:54:28 by irhett            #+#    #+#             */
/*   Updated: 2018/01/17 18:57:42 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

#define NEWLINE write(1, "\n", 1);
#define T(foo) printf(foo); ft_printf(foo); NEWLINE;
#define TT(foo, bar) printf(foo, bar) ; ft_printf(foo, bar); NEWLINE;

int		main(int argc, char **argv)
{
	char 			*test = "hello";
	unsigned int	uintmax;

	uintmax = 0;
	uintmax--;

	TT("%d\n", uintmax);
	TT("%i\n", uintmax);
	TT("%o\n", uintmax);
	TT("%u\n", uintmax);
	TT("%x\n", uintmax);
	TT("%X\n", uintmax);

	TT("%12c\n", 'a');
	TT("%12c\n", 0);
	TT("%12c\n", 255);

	TT("%p\n", &uintmax);
	TT("%.2p\n", NULL);
	TT("%.2p\n", uintmax);

	TT("%.2s\n", "hello");

	(void)argc;
	(void)argv;
	return (0);
}
