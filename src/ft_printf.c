/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:47:55 by irhett            #+#    #+#             */
/*   Updated: 2018/01/18 14:56:40 by irhett           ###   ########.fr       */
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
		if (*str == '%')
			ret = handle_others_fd(++str, &len, ap, 1);
		else
			ret = handle_string_fd(str, &len, 1);
		str += ret;
		if (ret < 0)
			return (printf_error(ap));
	}
	va_end(ap);
	return (len);
}

int		ft_printf_fd(int fd, const char *str, ...)
{
	va_list		ap;
	int			len;
	int			ret;

	va_start(ap, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
			ret = handle_others_fd(++str, &len, ap, fd);
		else
			ret = handle_string_fd(str, &len, fd);
		str += ret;
		if (ret < 0)
			return (printf_error(ap));
	}
	va_end(ap);
	return (len);
}
