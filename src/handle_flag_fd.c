/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_flag_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 22:10:54 by irhett            #+#    #+#             */
/*   Updated: 2018/01/16 14:43:08 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// return the number of spaces to move along the string,
// aka the number of characters interpreted that need to be skipped
//
// save the number of bytes written to { *len += n; }

int		handle_flag_fd(char *str, int *len, va_list ap, int fd)
{
	int		ret;

	if (*str == '%')
		ret = flag_percent(fd);
	else //if () //TODO
	{
		(void)ap;
		; //TODO 
	}
	*len += ret;
	return (ret);
}
