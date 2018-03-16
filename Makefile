# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afeuerst <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/02 13:23:08 by afeuerst          #+#    #+#              #
#    Updated: 2018/03/15 14:39:39 by afeuerst         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -c -Wall -Wextra -Werror
INCLUDES = -I ./includes

SRC = $(shell find ./src -type f | grep "\.c")
OBJ = $(notdir $(SRC:.c=.o))

all: $(NAME)

$(NAME):
	clang $(FLAGS) $(INCLUDES) $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
