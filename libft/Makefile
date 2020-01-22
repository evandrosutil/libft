# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 20:27:55 by ede-nada          #+#    #+#              #
#    Updated: 2020/01/21 20:30:39 by ede-nada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = TESTE

SRC = *.c

FLGS = -Wall -Werror -Wextra

HEADERS = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLGS) $(SRC) -o $(NAME) -I$(HEADERS)

clean:
	/bin/rm -f *.o

fclean:
	/bin/rm -f $(NAME)

re: fclean all
