/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:18:12 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/21 20:59:02 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int			ft_toupper(int c);
int			ft_isprint(int c);
long int	ft_strlen(const char *str);
int			ft_tolower(int c);

int	main()
{
	printf("ft_strlen: %lu // strlen: %lu\n", ft_strlen("pizza"), strlen("pizza"));
	printf("ft_tolower: %c // tolower: %c\n", ft_tolower('C'), tolower('C'));
	printf("ft_toupper: %c // toupper: %c\n", ft_toupper('c'), toupper('c'));
	printf("ft_isprint: %d // isprint: %d\n", ft_isprint(33), isprint(33));
}
