/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 10:43:06 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/02 10:43:07 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_helper(int64_t n, int fd)
{
	if (n == 0)
		return ;
	putnbr_helper(n / 10, fd);
	ft_putchar_fd('0' + (int)(n % 10), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		putnbr_helper(-1 * ((int64_t)n), fd);
	}
	else
		putnbr_helper(n, fd);
}
