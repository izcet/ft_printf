/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:13:07 by irhett            #+#    #+#             */
/*   Updated: 2018/01/17 14:03:59 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		handle_string_fd(const char *str, int *len, int fd)
{
	int		i;

	i = 0;
	if (str)
	{
		while (str[i] && str[i] != '%')
			i++;
		i = write(fd, str, i);
	}
	*len += i;
	return (i);
}
