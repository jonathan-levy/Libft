/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 18:48:04 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/03 14:44:47 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	if (!s)
	{
		return (NULL);
	}
	new = ft_stralloc(s);
	if (new)
	{
		i = -1;
		while (s[++i])
			new[i] = f(i, s[i]);
		new[i] = '\0';
	}
	return (new);
}
