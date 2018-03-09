/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 11:08:54 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/02 11:08:55 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupc(const char *s, char c)
{
	char	*str;

	str = ft_strallocc(s, c);
	if (str)
		ft_stpcpyc(str, s, c);
	return (str);
}
