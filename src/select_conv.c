/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:03:42 by irhett            #+#    #+#             */
/*   Updated: 2018/01/18 16:39:25 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	select_conv(const char *str)
{
	static char		option[] = "%%DOUXbcdimoprsux";
	unsigned int	i;
	unsigned int	o;
	unsigned int	opt_len;

	i = 0;
	opt_len = ft_strlen(option);
	while (str[i])
	{
		o = 0;
		while (o < opt_len)
		{
			if (str[i] == option[o])
				return (str[i]);
			o++;
		}
		i++;
	}
	return (0);
}
