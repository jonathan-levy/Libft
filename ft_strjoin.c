/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:50:12 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/05 12:23:38 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1)
		+ ft_strlen((char *)s2) + 1));
	if (!str)
	{
		return (NULL);
	}
	if (str)
		ft_stpcpy(ft_stpcpy(str, s1), s2);
	return (str);
}
