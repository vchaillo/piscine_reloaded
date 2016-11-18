# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valentin <valentin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/15 19:30:50 by valentin          #+#    #+#              #
#    Updated: 2016/11/15 19:35:17 by valentin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_display_file

CC	=	gcc
CFLAGS	+=	-Wall -Wextra -Werror
RM	=	rm -Rf

SRC	= 	main.c \
		ft_puts.c

INC	=	-I inc/

OBJ	=	$(patsubst %.c, obj/%.o, $(SRC))

all:   $(NAME)
$(NAME): obj $(OBJ)
		@echo "\033[1;34mCreating $(UNAME_S) executable\033[m"
		@$(CC) $(CFLAGS) -o $@ $(OBJ)

obj/%.o: %.c
		@$(CC) $(CFLAGS) $(INC) -o $@ -c $<
		@echo "[\033[1;32m√\033[m]" $<

obj:
		@mkdir -p obj

clean:
		@echo "\033[31;1mCleaning object files\033[0m"
		@$(RM) obj/

fclean:	clean
		@echo "\033[31;1mCleaning executables\033[0m"
		@$(RM) $(NAME)

re: fclean all

.PHONY: all obj clean fclean norm re