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

#include "libft.h"
#include <stdio.h>

int			ft_check_str_in(char c, char const *set)
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

static int	ft_check_occor(char const *s1, char const *set, int dir)
{
	int res;
	int	i;

	res = 0;
	i = 0;
	if (dir == 1)
		i = ft_strlen(s1) - 1;
	while (ft_check_str_in(s1[i], set))
	{
		res++;
		if (dir == 1)
			i--;
		else
			i++;
	}
	return (res);
}


char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		b_occor;
	int		e_occor;

	i = 0;
	if (!s1)
		return (0);
	b_occor = ft_check_occor(s1, set, 0);
	if (b_occor != ft_strlen(s1))
			e_occor = ft_check_occor(s1, set, 1);
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
