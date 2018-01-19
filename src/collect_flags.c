/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:23:20 by irhett            #+#    #+#             */
/*   Updated: 2018/01/18 19:26:20 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		collect_flags(const char *str, va_list ap, t_flags *flags, char conv)
{
	unsigned int	i;

	i = 0;
	while (str[i] && str[i] != conv)
	{
		if (1 == -1) // (invalid_flag_combination_thing(str[i], ap, etc))
			return (-1);
		// fill out the flags struct
		i++;
		(void)ap;
		(void)flags;
	}
	return (0);
}