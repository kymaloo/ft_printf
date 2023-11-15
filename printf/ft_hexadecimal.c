/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:54:07 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/15 15:39:18 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_hexadecimal(unsigned long n, char *base, int ptr)
{
	int	i;

	i = 0;
	if (ptr)
	{
		if (ft_putstr_fd("0x", 1) == -1)
			return (-1);
		i += 2;
	}
	if (n >= 16)
		i += ft_hexadecimal(n / 16, base, 0);
	if (ft_putchar_fd(base[n % 16], 1) == -1)
		return (-1);
	i++;
	return (i);
}
