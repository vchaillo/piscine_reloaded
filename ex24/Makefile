# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vchaillo <vchaillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 15:04:37 by vchaillo          #+#    #+#              #
#    Updated: 2016/11/14 00:36:53 by valentin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC	=	gcc
CFLAGS	+=	-Wall -Wextra -Werror -g
RM	=	rm -Rf

SRC =  ft_strlen.c ft_putchar.c ft_putstr.c ft_strcmp.c ft_swap.c

INC = -I includes

OBJ	=	$(patsubst %.c, objs/%.o, $(SRC))


all: $(NAME)
$(NAME): obj $(OBJ)
	@echo "\033[1;32mCreating $@\033[m"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

objs/%.o: srcs/%.c
	@$(CC) $(CFLAGS) $(INC) -o $@ -c $<
	@echo "[\033[1;32m√\033[m]" $<

obj:
	@mkdir -p objs

clean:
	@echo "\033[31;1mCleaning files.o\033[0m"
	@$(RM) objs/

fclean:	clean
	@echo "\033[31;1mCleaning libft.a\033[0m"
	@$(RM) $(NAME)

re: fclean all

.PHONY: all obj clean fclean re
