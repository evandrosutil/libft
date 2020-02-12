/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:27:39 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/12 19:51:54 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_intlen(int nb)
{
	int len;

	len = 0;
	if (nb == -2147483648)
		nb = (nb + 1) * -1;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int nb)
{
	char				*str;
	unsigned int		nbr;
	int					i;

	i = ft_intlen(nb);
	if (!(str = (char *)malloc(sizeof(char) * (i + 2))))
		return (0);
	str[i--] = 0;
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nbr = nb * -1;
	}
	else
		nbr = nb;
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	return (str);
}
