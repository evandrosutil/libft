# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 20:27:55 by ede-nada          #+#    #+#              #
#    Updated: 2020/02/11 22:26:09 by evandrosu        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = TESTE

SRC = ft_*.c

FLGS = -Wall -Werror -Wextra

LIBS = ft_*.o

all: $(NAME)

lib:
	gcc -c $(SRC)
	ar rcs libft.a $(LIBS)

$(NAME): lib
	gcc $(FLGS) main.c -o $(NAME) -L. -lft libft.a

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
