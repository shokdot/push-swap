NAME = push_swap
BONUS = checker
SRC = $(wildcard src/*.c) $(wildcard src/utils/*.c) $(wildcard src/operations/*.c) $(wildcard src/sorting/*.c)
BN_SRC = $(wildcard bonus/*.c)
INCLUDE = $(wildcard includes/*.h)
OBJ = $(SRC:.c=.o)
BN_OBJ = $(filter-out src/push_swap.o, $(SRC:.c=.o)) $(BN_SRC:.c=.o)
LIBFT = ./src/libft/libft.a
CFLAGS = -g #-Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(INCLUDE)
	@$(CC) $(CFLAGS) $(OBJ) -L ./src/libft -lft -o $(NAME)

bonus: $(NAME) $(LIBFT) $(BN_OBJ) $(INCLUDE)
	@$(CC) $(CFLAGS) $(BN_OBJ) -L ./src/libft -lft -o $(BONUS)

$(LIBFT):
	@make -C ./src/libft

clean:
	@$(RM) $(OBJ) $(BN_OBJ)
	@make clean -C ./src/libft

fclean: clean
	@$(RM) $(NAME) $(BONUS)
	@make fclean -C ./src/libft

re: fclean all

.PHONY: all clean fclean re
