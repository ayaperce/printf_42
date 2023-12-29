NAME = libftprintf.a
CC=clang
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LIBFT = ./include/*.c
SRC = ./source/*.c
OBJ = $(SRC:.c=.o)
OBJLibft = $(LIBFT:.c=.o)

$(NAME): $(OBJ) $(OBJLibft)
		ar rc $(NAME) $(OBJ) $(OBJLibft)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

clean:
		$(RM) $(OBJ) $(OBJLibft)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re