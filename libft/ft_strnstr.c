/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 21:12:47 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/25 16:11:34 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, unsigned long int len)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != 0 && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
