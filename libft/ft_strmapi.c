/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:24:39 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/12 20:40:42 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s))))
		return (0);
	while ((char)s[i] != 0)
	{
		str[i] = f(i, (char)s[i]);
		++i;
	}
	return ((char *)s);
}
