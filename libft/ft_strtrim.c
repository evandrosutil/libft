/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:29:07 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/06 21:02:08 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		ft_check_str_in(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		b_occor;
	int		e_occor;

	i = 0;
	b_occor = 0;
	e_occor = 0;
	if (!s1)
		return (0);
	while (ft_check_str_in(s1[i], set))
	{
		b_occor++;
		i++;
	}
	if (b_occor != ft_strlen(s1))
	{
		i = ft_strlen(s1);
		while (ft_check_str_in(s1[i - 1], set))
		{
			e_occor++;
			i--;
		}
	}
	i = ft_strlen(s1) - (e_occor + b_occor);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (i < ft_strlen(s1) - (b_occor + e_occor))
	{
		str[i] = s1[i + b_occor];
		i++;
	}
	str[i] = '\0';
	return (str);
}
