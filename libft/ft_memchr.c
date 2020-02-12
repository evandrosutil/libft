/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:30:58 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/12 19:50:52 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	c2;

	i = 0;
	c2 = (unsigned char)c;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == c2)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
