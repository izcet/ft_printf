/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collect_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:23:20 by irhett            #+#    #+#             */
/*   Updated: 2018/01/22 20:30:12 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
** return the number of spaces to increment the string pointer
** return -1 on erroneous flag
*/

int		add_flag(const char *str, va_list ap, t_flags *flags, char conv)
{
	int		i;

	i = 0;
	// increment range
	// digit (field width)
	// dot (with digits) (precision)
	
	// single increments
	// hash
	// zero
	// minus
	// space
	// plus
	// j
	// z
	// asterisk (field width)
	
	// multirange
	// h / hh
	// l / ll
	(void)str;
	(void)ap;
	(void)flags;
	(void)conv;

	return (i);
}

int		collect_flags(const char *str, va_list ap, t_flags *flags, char conv)
{
	unsigned int	i;
	int				ret;

	i = 0;
	while (str[i] && str[i] != conv)
	{
		ret = add_flag(&(str[i]), ap, flags, conv);
		if (ret < 0)
			return (-1);
		i += ret;
	}
	return (0);
}
