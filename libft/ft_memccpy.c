/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 19:20:36 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/31 19:27:18 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned long int n)
{
	unsigned long int i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)dst + i) == (unsigned char)c)
			return ((dst + i + 1));
		i++;
	}
	return (0);
}
