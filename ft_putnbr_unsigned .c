/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd .c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:36:13 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/08 19:59:42 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned_fd(int u, int *count)
{
	if (u <= 9)
	{
		ft_putchar_fd(u + '0', count);
		*count += 1;
	}
	if (u >= 10)
	{
		ft_putnbr(u / 10, count);
		ft_putchar(u % 10, count);
	}
}
