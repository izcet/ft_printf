/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:43:49 by irhett            #+#    #+#             */
/*   Updated: 2018/01/17 18:58:15 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>

typedef struct		s_flags
{
	char			hash:2;
	char			zero:2;
	char			minus:2;
	char			plus:2;
	char			space:2;
	char			star:2; // bonus // asterisk
	char			color:2; //bonus //TODO type format
	char			hh:2;
	char			h:2;
	char			ll:2;
	char			l:2;
	char			j:2;
	char			z:2;
	char			b:2; // bonus, binary mode
}					t_flags;

/*
** ft_printf.c
*/
int		ft_printf(const char *str, ...);
int		ft_printf_fd(int fd, const char *str, ...);

/*
** handle_flag_fd.c
*/
int		handle_flag_fd(const char *str, int *len, va_list ap, int fd);

/*
** handle_string_fd.c
*/
int		handle_string_fd(const char *str, int *len, int fd);


// TODO
int		printf_error(va_list ap);
int		flag_percent(int fd);

// man 3 printf
////////////////////// FLAGS ////////////////////////////////////////////////
//INTEGERS
// di (signed decimal)
// o unsigned octal
// u unsigned decimal
// xX unsigned hex xlower XUPPER
// DOU (long int variant) (ld lo lu)
// c (unsigned char) (putchar)

// s (putstr)
// p (void pointer printed as hex. `%#x` or `%#lx`

////////////////////////////////////////////////////////////////////////////
// hh
// - [di] signed char
// - [ouxX] unsigned char
//
// h
// - [di] short
// - [ouxX] unsigned short
//
// l
// - [di] long
// - [ouxX] unsigned long
//
// ll
// - [di] long long
// - [ouxX] unsigned long long
//
// j
// - [di] intmax_t
// - [ouxX] uintmax_t
// 
// z
// - [di] signed type equivalent to size_t
// - [ouxX] size_t


// (minimum field width)
//  - optional decimal digit string
//  - padded with spaces on the right to meet the field width
//  - %12i // if %i is less than 12 digits, pad with spaces

// . (dot) (optional precision)
// 	- an optional precision followed by an optional digit string.
// 	- if the string is omitted the precision is 0.
// 	- minimum number of digits to appear for diouxX
// 	- number of digits to appear after the decimal for aAeEfF
// 	- max number of significant digits for gG
// 	- max number of characters to be printed from a 's'

// # (hash) alternate form.
//  - 'c' 'd' 'i' 'p' 's' 'u' no effect
// 	- 'o' force first character of output string to 0
// 	- 'x' or 'X', a nonzero result has the `0x` or `0X` prepended
	

// 0 (zero) zero padding. for all conversions except 'n' (not included)
// 	- the converted value is padded on the left with zeros rather than blanks
// 	- if a precision is given with a neumeric conversion (d, i, o u, x, X)
// 		then the 0 flag is ignored
// 
// - (minus) negative field width flag. the value is left adjusted
// 	- padded on the right with blanks
// 	- overrides '0' (zero) if both are given
//
//   (space)
//  - a blank should be left before a positive number produced by a signed
//  	conversion
//
// + (plus)
//  - a sign must be placed before a signed number. overrides a space

#endif
