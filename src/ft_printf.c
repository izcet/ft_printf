/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 21:47:55 by irhett            #+#    #+#             */
/*   Updated: 2017/03/22 22:32:31 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// returns the count of characters printed to the screen
// not including \0
// return -1 on error

static int	printf_error(va_list ap)
{
	va_end(ap);
	return (-1);
}

int		ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		ret;
	
	va_start(ap, str);
	len = 0;
	while (*str)
	{
		if (*str != '%')
		{
			ret = write(1, str, 1);
			len++;
			str++;
		}
		else
		{
			ret = printf_handle(++str, &len, ap);
			str += ret;
		}
		if (ret < 0)
			return (printf_error(ap));
	}
	va_end(ap);
	return (len);
}

	
/*	
	va_list		ap2;
	char		*s;
	int			len;

	len = ft_strlen(str);
	va_start(ap, str);
	while (*str)
	{
		va_copy(ap2, ap);
		va_end(ap2);
		if (*str == 's')
		{
			s = va_arg(ap, char *);
			ft_putendl(s);
		}
		else if (*str == 'd')
		{
			 ft_putnbr(va_arg(ap, int));
		}
		else if (*str == 'c')
			ft_putchar((char)va_arg(ap, int));
		str++;
	}
	va_end(ap);
	return (len);
}*/
