# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssicard <ssicard@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/20 16:17:18 by ssicard           #+#    #+#              #
#    Updated: 2017/03/06 16:49:32 by ssicard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME) $(LIB)

$(NAME) :
	@$(CC) Colleen.c -o $(NAME) $(CFLAGS)
	@echo "MiniOns Arrived!"
	@echo "A New Challenger!"

clean :
	@rm Colleen
	@echo "MiniOns Died!"

fclean :
	@rm Colleen
	@echo "All's Destroyed! R.I.P :'("

re : fclean all
	@echo "And The Rain Against! ^^"

.PHONY: all clean fclean re
