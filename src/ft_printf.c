/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:47:55 by irhett            #+#    #+#             */
/*   Updated: 2017/05/19 21:27:36 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *str, ...)
{
	va_list		ap;
	int			len;
	int			ret;
	
	va_start(ap, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
		{
			ret = handle_string_fd(str, 1);
			len += ret;
			str += ret;
		}
		else
		{
			ret = handle_flag_fd(++str, &len, ap, 1);
			str += ret;
		}
		if (ret < 0)
			return (printf_error(ap));
	}
	va_end(ap);
	return (len);
}
