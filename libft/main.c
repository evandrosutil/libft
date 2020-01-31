/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:18:12 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/31 19:04:10 by ede-nada         ###   ########.fr       */
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
/*	char	s2[16]="";
	char	s1[20]="AAAAAAAAA";
	char	s4[16]="";
	char	s3[20]="AAAAAAAAA";

	char	str1[15]="AABBCCDD";
	char	str3[15]="AABBCCDD";
	char	str2[10]="";
	char	str4[10]=""; */
    (void)argc;
/*	printf("espero: %s / resultado: %s => ft_strlcpy: %lu // strlcpy: %lu\n", str1, str3, ft_strlcpy(str1, str2, 15), strlcpy(str3, str4, 15));
	printf("espero: %s / resultado: %s => ft_strlcat: %lu // strlcat: %lu\n", s1, s3, ft_strlcat(s3, s4, 15), strlcat(s1, s2, 15));
	printf("espero: 'teste' => ft_strchr: %s // strchr: %s\n", ft_strchr("teste", '\0'), strchr("teste", '\0'));
	printf("espero: 'bonjour' => ft_strrchr: %s // strrchr: %s\n", ft_strrchr("bonjour", 'b'), strrchr("bonjour", 'b'));
	printf("espero: 'quero pastel' => ft_strnstr: %s // strnstr: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15), strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	if (argv[1]) */
		printf("entrada: %s => ft_atoi: %d // atoi: %d\n", argv[1], ft_atoi(argv[1]), atoi(argv[1]));
/*	printf("letra: %c => ft_isalpha: %d // isalpha: %d\n", '2', ft_isalpha('2'), isalpha('2'));
	printf("digito: %c => ft_isdigit %d // isdigit: %d\n", 'a', ft_isdigit('a'), isdigit('a'));
	printf("caractere: %c => ft_isalnum: %d // isalnum: %d\n", 122,  ft_isalnum(122), isalnum(122));
	printf("caractere: %c => ft_isascii: %d // isascii: %d\n", 128, ft_isascii(128), isascii(128));
	printf("string: %s => ft_strlen: %lu // strlen: %lu\n", "pizza",  ft_strlen("pizza"), strlen("pizza"));
	printf("string: %s => ft_strncmp: %d // strncmp: %d\n", "test/testss", ft_strncmp("test", "testss", 7), strncmp("test", "testss", 7));
	printf("caractere: %c => ft_tolower: %c // tolower: %c\n", 'C', ft_tolower('C'), tolower('C'));
	printf("caractere: %c => ft_toupper: %c // toupper: %c\n", 'c', ft_toupper('c'), toupper('c'));
	printf("ft_isprint: %d // isprint: %d\n", ft_isprint(33), isprint(33)); */
}
