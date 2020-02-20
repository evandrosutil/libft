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
#include <stdio.h>
#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int seps;
	int i;

	i = 0;
	seps = 0;	
	while (s[i] != 0)
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != 0) && s[i] != 0)
			seps++;
		i++;
	}
	if (s[0] == c)
		seps -= 1;
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
	return w_size;
}

static char	*ft_splited(char const *s, int w_size, int i)
{
		char *word;
		int j;

		j = 0;
		word = (char *)malloc(sizeof(char) * (w_size + 1));
		while (j < w_size)
		{
			word[j] = s[i];
			i++;
			j++;
		}
		word[j] = 0;
		return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	size_t		i;
	int			seps;
	int			array_i;
	int			w_size;

	i = 0;
	seps = 0;
	if (!s)
		return (0);
	seps = ft_count_words(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (seps + 2))))
		return (0);
	array_i = 0;
	while (array_i <= seps)
	{
		while (s[i] == c || (s[i] >= 9 && s[i] <= 13) || s[i] == 32)
			i++;
		w_size = ft_word_size(s, c, i);
		array[array_i] = ft_splited(s, w_size, i);
		array_i++;
		i += w_size + 1;
	}
	array[array_i] = 0;
	return (array);
}

int main()
{
	char **array;
	int i=0;

	array = ft_split("lorem ipsum remet Turvald", 32);
	while (array[i] != 0)
	{
		printf("%d: %s\n", i, array[i]);
		i++;
	}
}
