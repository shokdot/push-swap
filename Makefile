NAME = push_swap
SRC = $(wildcard src/*.c) $(wildcard src/utils/*.c) $(wildcard src/operations/*.c) $(wildcard src/sorting/*.c)
INCLUDE = $(wildcard includes/*.h)
OBJ = $(SRC:.c=.o)
OBJ_DIR = ./obj
LIBFT = ./libft/libft.a
CFLAGS = -g #-Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(INCLUDE)
	@$(CC) $(CFLAGS) $(OBJ) -L ./src/libft -lft -o $(NAME)

$(LIBFT):
	@make -C ./src/libft

clean:
	@$(RM) $(OBJ)
	@make clean -C ./src/libft

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ./src/libft

re: fclean all

.PHONY: all clean fclean re
