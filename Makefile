NAME = push_swap
SRC = $(wildcard *.c)
INCLUDE = $(wildcard includes/*.h)
OBJ = $(SRC:.c=.o)
LIBFT = ./libft/libft.a
CFLAGS = -g #-Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(INCLUDE)
	@$(CC) $(CFLAGS) $(OBJ) -L ./libft -lft -o $(NAME)

$(LIBFT):
	@make -C ./libft

clean:
	@$(RM) $(OBJ)
	@make clean -C ./libft

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ./libft

re: fclean all

.PHONY: all clean fclean re
