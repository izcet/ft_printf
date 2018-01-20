/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:43:49 by irhett            #+#    #+#             */
/*   Updated: 2018/01/19 20:16:27 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>

#define PF_NONE 0
#define PF_BOLD 1
#define PF_UNDR 4
#define PF_BLNK 5
#define PF_RVRS 7
#define PF_HIDE 8

#define PF_BLK 30
#define PF_RED 31
#define PF_GRN 32
#define PF_YEL 33
#define PF_BLU 34
#define PF_MAG 35
#define PF_CYA 36
#define PF_WHI 37

#define PF_BG_BLK 40
#define PF_BG_RED 41
#define PF_BG_GRN 42
#define PF_BG_YEL 43
#define PF_BG_BLU 44
#define PF_BG_MAG 45
#define PF_BG_CYA 46
#define PF_BG_WHI 47


typedef struct		s_flags
{
	char			hash:2;
	char			zero:2;
	char			minus:2;
	char			plus:2;
	char			space:2;
	char			star:2; // bonus // asterisk
	// something something field width
	char			hh:2;
	char			h:2;
	char			ll:2;
	char			l:2;
	char			j:2;
	char			z:2;
}					t_flags;

typedef struct		s_pf_data
{
	t_flags			flag;
	int				fd;
	char			conv;
}					t_pf_data;

static int	(*conv_func[256])(int *, va_list, t_pf_data *);

/*
** ft_printf.c
*/
int		ft_printf(const char *str, ...);
int		ft_printf_fd(int fd, const char *str, ...);

/*
** handle_others_fd.c
*/
int		handle_others_fd(const char *str, int *len, va_list ap, int fd);

/*
** handle_string_fd.c
*/
int		handle_string_fd(const char *str, int *len, int fd);

/*
** select_conv.c
*/
char	select_conv(const char *str);

/*
** conv_color.c
*/
int		conv_color(const char *str, int *len, int fd);

/*
** printf_error.c
*/
int		printf_error(va_list ap);


//TODO

/*
** collect_flags.c
*/
int		collect_flags(const char *str, va_list ap, t_flags *flags, char conv);

/*
** conversions.c
*/
void	setup_conv_func_arr(void);
int		dispatch_conv(int *len, va_list ap, t_pf_data *d);

/*
** conv_integer.c
*/
int		conv_int_dec(int *len, va_list ap, t_pf_data *data);
int		conv_int_oct(int *len, va_list ap, t_pf_data *data);
int		conv_int_dec_u(int *len, va_list ap, t_pf_data *data);
int		conv_int_hex(int *len, va_list ap, t_pf_data *data);
int		conv_int_HEX(int *len, va_list ap, t_pf_data *data);

/*
** conv_long.c
*/
int		conv_long_dec(int *len, va_list ap, t_pf_data *data);
int		conv_long_oct(int *len, va_list ap, t_pf_data *data);
int		conv_long_dec_u(int *len, va_list ap, t_pf_data *data);

/*
** conv_other.c
*/
int		conv_char(int *len, va_list ap, t_pf_data *data);
int		conv_pointer(int *len, va_list ap, t_pf_data *data);
int		conv_binary(int *len, va_list ap, t_pf_data *data);

/*
** conv_string.c
*/
int		conv_string(int *len, va_list ap, t_pf_data *data);
int		conv_string_raw(int *len, va_list ap, t_pf_data *data);


/*
** conv_percent.c
*/
int		conv_percent(int *len, va_list ap, t_pf_data *data);


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
// % (percent character literal)

// r (raw) (my bonus) // like str but with other data
// b (binary) (bonus) // like int

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
