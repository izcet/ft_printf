/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:54:28 by irhett            #+#    #+#             */
/*   Updated: 2018/01/22 20:24:31 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

#define NEWLINE write(1, "||||||||||||||||||||||||||||||\n\n", 32);
#define PF printf

#define T(foo) PF("pf:\n"); PF(foo); PF("ft:\n"); ft_printf(foo); NEWLINE;
#define TT(a, b) PF("pf:\n"); PF(a, b) ; PF("ft:\n"); ft_printf(a, b); NEWLINE;

int		main(int argc, char **argv)
{
///	char 			*test = "hello";
	unsigned long long	uintmax;

	uintmax = 0;
	uintmax--;

/*	TT("%d\n", uintmax);
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


	PF("[%% %%\\n]\n");
	T("% %\n");

	PF("[%%]\n");
	T("%");

	PF("[%% %%%% %%%%%% %%%%%%%% %%%%%%%%%%\\n\n]\n");
	T("% %% %%% %%%% %%%%%\n");
	
	T("\\\n");
	T("\ a\nb \tc\n");

*/
//	TT("%zllu\n", uintmax);

	printf("%0*9*6*4*i\n", 1, 2, 4, 5, 69);
	(void)argc;
	(void)argv;
	return (0);
}
