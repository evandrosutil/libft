/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:43:28 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/02 19:11:45 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
    int i;
    int j;
    char *s2;

    i = 0;
    j = 0;
    while (s1[i] != 0)
	i++;
    s2 = (char *)malloc((i + 1) * sizeof(char));
    if (!s2)
	return (0);
    while (j < i)
    {
	*(s2 + j) = *((char *)s1 + j);
	j++;
    }
    s2[j] = 0;
    return ((char *)s2);
}
