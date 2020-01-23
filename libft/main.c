/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:18:12 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/23 21:03:53 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int         ft_atoi(const char *str);
int         ft_isalnum(int c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int			ft_isprint(int c);
long int	ft_strlen(const char *str);
int         ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_tolower(int c);
int			ft_toupper(int c);

int	main(int argc, char **argv)
{
    (void)argc;
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
