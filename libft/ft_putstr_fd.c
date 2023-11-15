/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trgaspar <trgaspar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:52:54 by trgaspar          #+#    #+#             */
/*   Updated: 2023/11/15 15:31:21 by trgaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	return (write(fd, s, ft_strlen(s)));
}
