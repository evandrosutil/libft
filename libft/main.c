/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:18:12 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/23 22:01:14 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
    (void)argc;
	printf("espero: 'stel' => ft_strrchr: %s // strrchr: %s\n", ft_strrchr("pastel", 115), strrchr("pastel", 115));
	printf("espero: 'quero pastel' => ft_strnstr: %s // strnstr: %s\n", ft_strnstr("sabado eu quero pastel", "quero", 15), strnstr("sabado eu quero pastel", "quero", 15));
    if (argv[1])
        printf("entrada: %s => ft_atoi: %d // atoi: %d\n", argv[1], ft_atoi(argv[1]), atoi(argv[1]));
    printf("letra: %c => ft_isalpha: %d // isalpha: %d\n", '2', ft_isalpha('2'), isalpha('2'));
    printf("digito: %c => ft_isdigit %d // isdigit: %d\n", 'a', ft_isdigit('a'), isdigit('a'));
    printf("caractere: %c => ft_isalnum: %d // isalnum: %d\n", 122,  ft_isalnum(122), isalnum(122));
    printf("caractere: %c => ft_isascii: %d // isascii: %d\n", 128, ft_isascii(128), isascii(128));
    printf("string: %s => ft_strlen: %lu // strlen: %lu\n", "pizza",  ft_strlen("pizza"), strlen("pizza"));
	printf("string: %s => ft_strncmp: %d // strncmp: %d\n", "lala", ft_strncmp("tudo", "tudo", 2), strncmp("tudo", "tudo", 2));
    printf("caractere: %c => ft_tolower: %c // tolower: %c\n", 'C', ft_tolower('C'), tolower('C'));
    printf("caractere: %c => ft_toupper: %c // toupper: %c\n", 'c', ft_toupper('c'), toupper('c'));
    printf("ft_isprint: %d // isprint: %d\n", ft_isprint(33), isprint(33));
}
