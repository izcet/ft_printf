/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:13:07 by irhett            #+#    #+#             */
/*   Updated: 2017/11/28 16:12:47 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		handle_string_fd(char **str, int fd)
{
	int		i;
	int		bw;

	i = 0;
	bw = 0;
	if (str && *str)
	{
		while ((*str)[i] && ((*str)[i] != '%'))
			i++;
		bw = write(fd, *str, i);
		*str += i;
	}
	return (bw);
}
