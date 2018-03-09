/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 10:38:05 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/02 10:38:06 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calc_width(int64_t n)
{
	int		count;

	count = 1;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	if (n < 0)
		count++;
	return (count);
}

static char	*reverse(char *s, int count)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < (count / 2))
	{
		tmp = s[i];
		s[i] = s[count - (i + 1)];
		s[count - (i + 1)] = tmp;
		i++;
	}
	return (s);
}

char		*ft_itoa(int n_)
{
	int64_t	n;
	char	*buff;
	int		buffptr;

	if ((buff = ft_memalloc(calc_width(n_) + 1)) == NULL)
		return (NULL);
	buffptr = 0;
	if ((n = (int64_t)n_) == 0)
	{
		buff[0] = '0';
		return (buff);
	}
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		buff[buffptr++] = '0' + (n % 10);
		n /= 10;
	}
	if (n_ < 0)
		buff[buffptr++] = '-';
	return (reverse(buff, buffptr));
}
