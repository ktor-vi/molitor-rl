# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 17:31:20 by vphilipp          #+#    #+#              #
#    Updated: 2023/10/10 17:39:57 by vphilipp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = libft.a
SRCS   = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
CC    = cc
FLAGS   = -Wall -Wextra -Werror
OBJ    = $(addprefix $(SRCDIR), $(SRCS:.c=.o))
SRCDIR   = ./srcs/
INCDIR   = ./includes/

all:$(NAME)

$(SRCDIR)%.o:$(SRCDIR)%.c
	$(CC) $(FLAGS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all