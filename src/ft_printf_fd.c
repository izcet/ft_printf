/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:19:05 by irhett            #+#    #+#             */
/*   Updated: 2017/04/13 19:18:02 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf_fd(int fd, const char *str, ...)
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
			ret = handle_string_fd(str, fd);
			len += ret;
			str += ret;
		}
		else
		{
			ret = handle_flag_fd(++str, &len, ap, fd);
			str += ret;
		}
		if (ret < 0)
			return (printf_error(ap));
	}
	va_end(ap);
	return (len);
}
