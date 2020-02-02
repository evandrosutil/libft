/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:46:40 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/02 17:00:51 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(unsigned long int count, unsigned long int size)
{
    void		**a;
    unsigned long int	c;

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
