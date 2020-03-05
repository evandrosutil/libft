/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:24:10 by ede-nada          #+#    #+#             */
/*   Updated: 2020/03/05 18:45:31 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!src)
		return (0);
	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	j = 0;
	while (dstsize != 0 && j < (dstsize - 1) && src[j])
	{
		dst[j] = src[j];
		j++;
	}
	if (j < dstsize)
	{
		dst[j] = '\0';
	}
	return (i);
}
