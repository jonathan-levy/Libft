/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 11:08:08 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/02 11:08:29 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strcount(char const *s, char c)
{
	unsigned int	count;

	if (!*s)
		return (0);
	count = 0;
	if (*s != c)
		++count;
	while (*++s)
		if (*s == c && *(s - 1) != c)
			count++;
	return (count);
}
