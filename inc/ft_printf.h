/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 19:43:49 by irhett            #+#    #+#             */
/*   Updated: 2018/01/16 14:43:05 by irhett           ###   ########.fr       */
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
	char			color:2; //bonus //TODO type format
	char			hh:2;
	char			h:2;
	char			ll:2;
	char			l:2;
	char			j:2;
	char			z:2;
	char			b:2; // bonus, binary mode
}					t_flags;

/*
** ft_printf.c
*/
int		ft_printf(const char *str, ...);
int		ft_printf_fd(int fd, const char *str, ...);

/*
** handle_flag_fd.c
*/
int		handle_flag_fd(char *str, int *len, va_list ap, int fd);

/*
** handle_string_fd.c
*/
int		handle_string_fd(char *str, int *len, int fd);


// TODO
int		printf_error(va_list ap);
int		flag_percent(int fd);

#endif
