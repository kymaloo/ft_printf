/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:16:53 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/15 15:38:27 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

int		ft_hexadecimal(unsigned long n, char *base, int ptr);
int		ft_parse_percent(char *str, va_list params);
int		ft_format(char format, va_list params);
int		ft_printf(const char *format, ...);

#endif