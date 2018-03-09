/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:15:45 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/01 18:15:53 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		cpy_end;

	i = 0;
	cpy_end = 0;
	while (i < len)
	{
		if (src[i] && !cpy_end)
			dst[i] = src[i];
		else
		{
			dst[i] = '\0';
			cpy_end = 1;
		}
		i++;
	}
	return (dst);
}
