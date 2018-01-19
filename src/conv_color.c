/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_color.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:23:11 by irhett            #+#    #+#             */
/*   Updated: 2018/01/18 20:30:58 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_valid_color(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != 'm')
	{
		if (!(ft_isdigit(str[i]) || str[i] == ';'))
			return (0);
		i++;
	}
	if (str[i] == 'm')
		return (1);
	return (0);
}

int			conv_color(const char *str, int *len int fd)
{
	unsigned int	i;
	int				ret;
	static char		escape[] = { 033, 0133 };

	i = 0;
	ret = -1;
	if (is_valid_color(str))
	{
		while (str[i] != 'm')
			i++;
		ret = write(fd, escape, 2);
		if (ret > 0)
		{
			ret += write(fd, str, i);
			*len += ret;
			return (i);
		}
	}
	return (-1);
}
