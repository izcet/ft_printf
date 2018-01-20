/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 19:21:26 by irhett            #+#    #+#             */
/*   Updated: 2018/01/19 20:17:42 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		conv_percent(int *len, va_list ap, t_pf_data *data)
{
	int		ret;

	ret = write(data->fd, "%", 1);
	*len += ret;
	// get length of other stuff from and handle data;
	(void)ap;
	return (ret);
}
