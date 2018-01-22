/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_others_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 14:54:33 by irhett            #+#    #+#             */
/*   Updated: 2018/01/21 19:47:16 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** return the number of spaces to move along the string,
** aka the number of characters interpreted that need to be skipped
**
** save the number of bytes written to { *len += n; }
*/

int		handle_others_fd(const char *str, int *len, va_list ap, int fd)
{
	int			ret;
	t_pf_data	data;

	data.conv = select_conv(str);
	if (data.conv == 0)
		return (-1);
	if (data.conv == 'm')
		ret = conv_color(str, len, fd);
	else
	{
		ret = collect_flags(str, ap, &(data.flag), data.conv);
		if (ret < 0)
			return (ret);
		ret = dispatch_conv(str, len, ap, &(data));
	}
	return (ret);
}
