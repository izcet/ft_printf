/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:26:24 by irhett            #+#    #+#             */
/*   Updated: 2018/01/19 20:16:18 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	setup_conv_func_arr(void)
{
	if (conv_func['i'] == 0)
	{
		conv_func['i'] = conv_int_dec;
		conv_func['d'] = conv_int_dec;
		conv_func['o'] = conv_int_oct;
		conv_func['u'] = conv_int_dec_u;
		conv_func['x'] = conv_int_hex;
		conv_func['x'] = conv_int_HEX;
		conv_func['D'] = conv_long_dec;
		conv_func['O'] = conv_long_oct;
		conv_func['U'] = conv_long_dec_u;
		conv_func['c'] = conv_char;
		conv_func['s'] = conv_string;
		conv_func['p'] = conv_pointer;
		conv_func['%'] = conv_percent;
		conv_func['r'] = conv_string_raw;
		conv_func['b'] = conv_binary;     
	}
}

int		dispatch_conv(int *len, va_list ap, t_pf_data *data)
{
	setup_conv_func_arr();
	// may need to dereference a pointer somewhere
	return (conv_func[(int)data->conv](len, ap, data));
}
