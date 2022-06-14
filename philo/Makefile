# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/12 05:41:43 by skasmi            #+#    #+#              #
#    Updated: 2022/06/12 05:45:46 by skasmi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=gcc
CFLAGS=-Wall -Wextra -Werror 

NAME=philosopher

SRCS=philosopher.c\
		aux.c\

BSRCS=BONUS/philosopher_bonus.c\
		
BOBJCTS=$(BSRCS:%.c=%.o)

OBJCTS=$(SRCS:%.c=%.o)

$(NAME) : $(OBJCTS)
		CC $(CFLAGS)  $(OBJCTS) -o $(NAME)

all: $(NAME)

bonus : $(BOBJCTS)
		CC $(CFLAGS)  $(BOBJCTS) -o philosopher_bonus

clean:
		rm -f $(OBJCTS) $(BOBJCTS)

fclean: clean
		rm -f $(NAME) philosopher_bonus
		
re: fclean all	