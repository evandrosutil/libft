/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 20:30:58 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/31 20:32:31 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned long int n)
{
    unsigned long int	i;
    unsigned char	c2;

    i = 0;
    c2 = (unsigned char)c;
    while (i < n)
    {
	if (*((unsigned char *)s + i) == c2)
	    return ((char *)s + i);
	i++;
    }
    return (0);
}
