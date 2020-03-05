/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 20:24:39 by ede-nada          #+#    #+#             */
/*   Updated: 2020/03/05 18:19:03 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*str;

	if (!s)
		return (0);
	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	ft_bzero(str, ft_strlen(s) + 1);
	while (s[i] != 0)
	{
		str[i] = s[i];
		++i;
	}
	i = 0;
	while (str[i] != 0)
	{
		str[i] = (*f)(i, str[i]);
		++i;
	}
	return (str);
}
