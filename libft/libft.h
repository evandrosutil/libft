/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:31:41 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/25 15:55:40 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int					ft_atoi(const char *str);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
unsigned long int	ft_strlen(const char *str);
int					ft_strncmp(const char *s1,
								const char *s2,
								unsigned long int n);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strnstr(char const *str,
								const char *to_find,
								unsigned long int len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
unsigned long int	ft_strlcat(char *dest, char *src, unsigned long int size);
unsigned long int	ft_strlcpy(char *dest, char *src, unsigned long int size);
#endif
