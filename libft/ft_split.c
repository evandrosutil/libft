/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:46:04 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/13 22:37:32 by evandrosu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char		**array;
	size_t		i;
	int			seps;
	int			array_i;
	int			j;
	int			w_size;

	i = 0;
	seps = 0;
	if (!s)
		return (0);
	while (s[i] != 0)
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0) && s[i] != 0)
			seps++;
		i++;
	}
	if (s[0] == c)
		seps -= 1;
	if (!(array = (char **)malloc(sizeof(char *) * (seps + 2))))
		return (0);
	i = 0;
	array_i = 0;
	while (array_i <= seps)
	{
		while (s[i] == c || (s[i] >= 9 && s[i] <= 13) || s[i] == 32)
			i++;
		w_size = 0;
		while (s[i] != c && s[i] != 0)
		{
			w_size++;
			i++;
		}
		array[array_i] = (char *)malloc(sizeof(char) * (w_size + 1));
		j = 0;
		i -= w_size;
		while (j < w_size)
		{
			array[array_i][j] = s[i];
			i++;
			j++;
		}
		array[array_i][j] = 0;
		array_i++;
		i++;
	}
	array[array_i] = 0;
	return (array);
}
