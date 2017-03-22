/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 18:40:58 by irhett            #+#    #+#             */
/*   Updated: 2017/03/21 21:47:48 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// returns the count of characters printed to the screen

int		ft_printf(const char *str, ...)
{
	va_list		ap;
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
}
