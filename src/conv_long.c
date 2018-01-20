/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 20:23:04 by irhett            #+#    #+#             */
/*   Updated: 2018/01/19 20:19:39 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		conv_long_dec(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of ytes to increment STR
}

int		conv_long_dec_u(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of ytes to increment STR
}

int		conv_long_oct(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of ytes to increment STR
}
