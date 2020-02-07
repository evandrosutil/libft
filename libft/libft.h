/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:31:41 by ede-nada          #+#    #+#             */
/*   Updated: 2020/02/06 20:06:42 by ede-nada         ###   ########.fr       */
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
char				*ft_itoa(int nb);
char				*ft_strnstr(char const *str,
								const char *to_find,
								unsigned long int len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
unsigned long int	ft_strlcat(char *dest, char *src, unsigned long int size);
unsigned long int	ft_strlcpy(char *dest, char *src, unsigned long int size);
void				*ft_memcpy(void *dst,
								const void *src,
								unsigned long int n);
void				*ft_memset(void *s, int c, unsigned long int n);
void				ft_bzero(void *s, unsigned long int n);
void				*ft_memccpy(void *dst, const void *src, int c, unsigned long int n);
void				*ft_memmove(void *dst, const void *src, unsigned long int len);
void				*ft_memchr(const void *s, int c, unsigned long int n);
void				*ft_memcmp(void *s1, const void *s2, unsigned long int n);
void				*ft_calloc(unsigned long int count, unsigned long int size);
char				*ft_strdup(const char *s1);
char				*ft_strtrim(char const *s1, char const *set);
#endif
