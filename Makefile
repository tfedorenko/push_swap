# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfedoren <tfedoren@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 20:56:10 by tfedoren          #+#    #+#              #
#    Updated: 2022/06/07 21:07:41 by tfedoren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC =	push_swap.c \
		push_swap_swap.c \
		push_swap_push.c \
		push_swap_rotate.c \
		push_swap_rotate_reverse.c \
		push_swap_input_check.c \
		push_swap_rules.c \
		push_swap_sorting.c \
		ft_atol.c 

OBJ = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror -I
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus