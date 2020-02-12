/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:46:40 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/11 23:05:46 by evandrosu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	**a;
	size_t	c;

	c = 0;
	a = malloc(count * size);
	if (!a)
		return (0);
	while (c <= count)
	{
		*(a + c) = 0;
		c++;
	}
	return (a);
}
