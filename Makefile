# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgeonosi <dgeonosi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 20:18:18 by dgeonosi          #+#    #+#              #
#    Updated: 2020/08/14 20:32:52 by dgeonosi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = dgeonosi.filler

FLAGS = -Werror -Wextra -Wall

SRC = src/alg.c \
			src/alg2.c \
			src/filler.c \
			src/alg3.c \
			src/tools.c

INCLUDES = libft/libft.a

all: $(NAME)

$(NAME):
	@make -C libft/ all
	gcc -o $(NAME) $(SRC) $(FLAGS) $(INCLUDES)

clean:
	@make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all
