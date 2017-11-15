/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:43:49 by irhett            #+#    #+#             */
/*   Updated: 2017/05/19 21:27:39 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft.h"
#include <stdarg.h>

typedef struct		s_flags
{
	char			hash:2;
	char			zero:2;
	char			minus:2;
	char			plus:2;
	char			space:2;
	char			star:2; // bonus
	char			hh:2;
	char			h:2;
	char			ll:2;
	char			l:2;
	char			j:2;
	char			z:2;
	char			b:2; // bonus, binary mode
}					t_flags;

int		ft_printf(const char *str, ...);
int		ft_printf_fd(int fd, const char *str, ...);
int		printf_error(va_list ap);

int		handle_string_fd(char *str, int fd);
int		handle_flag_fd(char *str, int *len, va_list ap, int fd);

int		flag_percent(int *len, int fd);

#endif
