/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:32:55 by jolevy            #+#    #+#             */
/*   Updated: 2018/02/28 14:32:58 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = ft_stralloc(s1);
	if (str)
	{
		ft_stpcpy(str, s1);
		return (str);
	}
	else
	{
		return (NULL);
	}
}
