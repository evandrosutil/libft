# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 20:27:55 by ede-nada          #+#    #+#              #
#    Updated: 2020/03/05 18:31:28 by ede-nada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c \
	  ft_bzero.c \
	  ft_calloc.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_itoa.c \
	  ft_memccpy.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_split.c \
	  ft_strchr.c \
	  ft_substr.c \
	  ft_strtrim.c \
	  ft_strdup.c \
	  ft_strjoin.c \
	  ft_strlcat.c \
	  ft_strlcpy.c \
	  ft_strlen.c \
	  ft_strmapi.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strrchr.c \
	  ft_tolower.c \
	  ft_toupper.c 

FILES_BONUS = ft_lstnew.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstadd_back.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c \
	  ft_lstiter.c \
	  ft_lstmap.c \
	  ft_lstlast.c

FLGS = -Wall -Werror -Wextra

OBJCTS = $(FILES:.c=.o)

OBJCTS_BONUS = $(FILES_BONUS:.c.=o)

INCLDS = libft.h

all: $(NAME)

$(NAME): $(OBJCTS)
	ar rc $(NAME) $(OBJCTS)

clean:
	/bin/rm -f $(OBJCTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

bonus: $(OBJCTS_BONUS) $(OBJCTS) 
	ar rc $(NAME) $(OBJCTS) $(OBJCTS_BONUS)

%.o: %.c
	gcc -c $(FLGS) $< -I $(INCLDS) -o $@
