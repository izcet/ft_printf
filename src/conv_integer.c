/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_integer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 20:22:30 by irhett            #+#    #+#             */
/*   Updated: 2018/01/21 19:48:53 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		conv_int_hex_u(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of bytes to increment STR
}

int		conv_int_dec(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of bytes to increment STR
}

int		conv_int_dec_u(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of bytes to increment STR
}

int		conv_int_hex(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of bytes to increment STR
}

int		conv_int_oct(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of bytes to increment STR
}
