# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 02:52:20 by ayaperce          #+#    #+#              #
#    Updated: 2024/01/02 04:04:01 by ayaperce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=clang
CFLAGS=-Wall -Wextra -Werror -g2
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC= 	./include/ft_itoa.c ./include/ft_strdup.c ./include/ft_strlen.c ./include/ft_strlcpy.c

SRCB =	./source/printf.c ./source/srcpf.c
OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

$(NAME): $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJ) $(OBJB)
	ranlib $(NAME)

%.o: %.c
	$(CC) -I. -o $@ -c $< $(CFLAGS) 

all: $(NAME)

bonus : $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJ) $(OBJB)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ) $(OBJB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRCB)
	gcc -nostartfiles -shared -o li