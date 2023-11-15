/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:36:13 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/15 15:51:53 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else if (n < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		n = -n;
		i++;
	}
	if (n >= 10)
	{
		j = ft_putnbr_fd(n / 10, fd);
		if (j == -1)
			return (-1);
		i += j;
	}
	if (ft_putchar_fd(n % 10 + '0', fd) == -1)
		return (-1);
	i++;
	return (i);
}

int	ft_putnbr_unsigned(unsigned int u)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (u >= 10)
	{
		j = ft_putnbr_fd(u / 10, 1);
		if (j == -1)
			return (-1);
		i += j;
	}
	if (ft_putchar_fd(u % 10 + '0', 1) == -1)
		return (-1);
	i++;
	return (i);
}
