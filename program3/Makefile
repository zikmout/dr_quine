# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssicard <ssicard@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/20 16:17:18 by ssicard           #+#    #+#              #
#    Updated: 2017/03/06 17:43:52 by ssicard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sully

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME) $(LIB)

$(NAME) :
	@$(CC) Sully.c -o $(NAME) $(CFLAGS)
	@echo "MiniOns Arrived!"
	@echo "A New Challenger!"

clean :
	@rm Sully
	@rm *Sully_*
	@echo "MiniOns Died!"

fclean :
	@rm Sully
	@rm *Sully_*
	@echo "All's Destroyed! R.I.P :'("

re : fclean all
	@echo "And The Rain Against! ^^"

.PHONY: all clean fclean re
