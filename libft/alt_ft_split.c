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
#include "libft.h"
#include <stdio.h>
static int	ft_count_words(char const *s, char c)
{
	char	seps;
	int		i;

	while (s[i] != 0)
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0) && s[i] != 0)
				seps++;
		i++;
	}
	return (seps);
}

static int	ft_word_size(char const *s, char c, int i)
{
	int w_size;

	w_size = 0;
	while (s[i] != c && s[i] != 0)
	{
		w_size++;
		i++;
	}
	return (w_size);
}

static void	ft_write_word(char **arr, char const *s, int i, int array_i, int w)
{
	int j;

	j = 0;
	while (j < w)
	{
		arr[array_i][j] = s[i];
		i++;
		j++;
	}
	arr[array_i][j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		seps;
	int		array_i;
	int		w_size;

	i = 0;
	if (!s)
		return (0);
	seps = ft_count_words(s, c);
	if (s[0] == c)
		seps -= 1;
	if (!(array = (char **)malloc(sizeof(char *) * (seps + 2))))
		return (0);
	array_i = 0;
	while (array_i <= seps)
	{
		while (s[i] == c || (s[i] >= 9 && s[i] <= 13) || s[i] == 32)
			i++;
		w_size = ft_word_size(s, c, i);
		array[array_i] = (char *)malloc(sizeof(char) * (w_size + 1));
		ft_write_word(array, s, i, array_i, w_size);
		array_i++;
		i += w_size + 1;
	}
	array[array_i] = 0;
	return (array);
}
