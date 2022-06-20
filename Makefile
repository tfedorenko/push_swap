# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stena-he <stena-he@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 20:56:10 by tfedoren          #+#    #+#              #
#    Updated: 2022/06/20 20:43:10 by stena-he         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_PATH	=	Libft

SRC =	push_swap_swap.c \
		push_swap.c \
		push_swap_push.c \
		push_swap_rotate.c \
		push_swap_rotate_reverse.c \
		push_swap_input_check.c \
		push_swap_helpers.c \
		push_swap_sort_three.c \
		push_swap_sort_five.c \
		push_swap_radix_sort.c \
		push_swap_helpers_2.c 

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_PATH)
	$(CC) $(CFLAGS) $(OBJ) -L$(LIBFT_PATH) -lft -o $(NAME)
#	ar rcs $(NAME) $(OBJ)

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all
	make -C $(LIBFT_PATH) re

.PHONY: all clean fclean re bonus