/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strallocc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolevy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 11:07:39 by jolevy            #+#    #+#             */
/*   Updated: 2018/03/02 11:07:40 by jolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strallocc(const char *s, char c)
{
	return (char *)malloc((ft_strlenc(s, c) + 1) * sizeof(char));
}
