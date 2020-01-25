/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:57:20 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/25 17:02:44 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long int n)
{
	unsigned long int	i;
	unsigned char		*ss1;
	unsigned char		*ss2;

	i = 0;
	ss1 = s1;
	ss2 = s2;
	while ((ss1[i] != 0 || ss2[i] != 0) && i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
