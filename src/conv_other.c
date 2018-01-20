/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_other.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 20:23:33 by irhett            #+#    #+#             */
/*   Updated: 2018/01/19 20:19:26 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		conv_char(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of ytes to increment STR
}

int		conv_pointer(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of ytes to increment STR
}

int		conv_binary(int *len, va_list ap, t_pf_data *data)
{
	(void)len;
	(void)ap;
	(void)data;
	return (1); // number of ytes to increment STR
}
