NAME=libftprintf.a
CC=clang
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LIBFT = ./include/ft_strdup.c
SRC = ./source/ft_printf.c ./source/ft_put.c
OBJ = $(SRC:.c=.o)
OBJLibft = $(LIBFT:.c=.o)

GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

all: header $(NAME)
		@printf '\n$(GREY) Compilation $(GREEN)Done\n'

header:
		@printf '\n\n'
		@printf '$(GOLD)            *******     *****  ******* $(END)\n'
		@printf '$(GOLD)          ******        ***    ******* $(END)\n'
		@printf '$(GOLD)      *******                 ******* $(END)\n'
		@printf '$(GOLD)     ******                 ******* $(END)\n'
		@printf '$(GOLD)  *******                 ******* $(END)\n'
		@printf '$(GOLD) ********************   *******      * $(END)\n'
		@printf '$(GOLD) ********************   *******    *** $(END)\n'
		@printf '$(GOLD)              *******   ******* ****** $(END)\n'
		@printf '$(GOLD)              ******* $(END)\n'
		@printf '$(GOLD)              ******* $(END)\n\n'
		@printf '$(GREY)                                      Made by rparodi$(END)\n\n\n'

$(NAME): $(OBJ) $(OBJLibft)
		@printf '$(GREY) Compiling $(END)$(GOLD)$(NAME)$(END)\n'
		@ar rc $(NAME) $(OBJ) $(OBJLibft)
		@ranlib $(NAME)

%.o: %.c
		@printf '$(GREY) Compiling $(END)$(GREEN)$<$(END)\n'
		@$(CC) -I. -o $@ -c $? $(CFLAGS)

dev: all bonus clean

clean:
		@printf '$(GREY) Removing $(END)$(RED)Object$(END)\n'
		@$(RM) $(OBJ) $(OBJLibft)

fclean: clean
		@printf '$(GREY) Removing $(END)$(RED)Program$(END)\n'
		@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re dev header