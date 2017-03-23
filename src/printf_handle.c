/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_handle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 22:10:54 by irhett            #+#    #+#             */
/*   Updated: 2017/03/22 22:32:37 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// return the number of spaces to move along the string,
// aka the number of characters interpreted that need to be skipped
//
// save the number of bytes written to { *len += n; }

int		printf_handle(char *str, int *len, va_list ap)
{
	int		ret;

	if (*str == '%')
	{
		ret = write(1, "%", 1);
		(*len)++;
		return (ret);
	}




}
