/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:35:46 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/01 18:35:47 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_blank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	if (c == '\r' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f')
		return (1);
	return (0);
}

static int	skip_preceding(const char **str)
{
	while (is_blank(**str))
		(*str)++;
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	else if (**str == '+')
		(*str)++;
	return (1);
}

int			ft_atoi(const char *str)
{
	int64_t		sum;
	int			neg;

	sum = 0;
	neg = skip_preceding(&str);
	while (*str && ft_isdigit(*str))
	{
		sum *= 10;
		sum += (*str - '0');
		str++;
	}
	return ((int)(sum * neg));
}
