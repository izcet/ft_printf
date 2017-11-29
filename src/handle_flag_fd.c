/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_flag_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 22:10:54 by irhett            #+#    #+#             */
/*   Updated: 2017/11/28 16:13:19 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// return the number of spaces to move along the string,
// aka the number of characters interpreted that need to be skipped
//
// save the number of bytes written to { *len += n; }

int		handle_flag_fd(char **str, int *len, va_list ap, int fd)
{
	int		ret;

	if (**str == '%')
		return (flag_percent(len, fd))




}
