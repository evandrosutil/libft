/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:31:41 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/23 21:37:56 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char		*ft_strnstr(char const *str, const char *to_find, unsigned long int len); 
