NAME = push_swap
BONUS = checker

SRC = $(wildcard src/*.c) $(wildcard src/utils/*.c) $(wildcard src/operations/*.c) $(wildcard src/sorting/*.c)
BN_SRC = $(wildcard bonus/*.c)

HEADERS = $(wildcard includes/*.h)
INCLUDE = -I includes

OBJ = $(SRC:.c=.o)
BN_OBJ = $(filter-out src/push_swap.o src/parse.o, $(SRC:.c=.o)) $(BN_SRC:.c=.o)

LIBFT = ./src/libft/libft.a
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ) $(HEADERS)
	@$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) -L ./src/libft -lft -o $(NAME)
	@echo "\x1b[32;1m Run PUSH_SWAP YES! \x1b[0m"

bonus: $(NAME) $(LIBFT) $(BN_OBJ) $(HEADERS)
	@$(CC) $(CFLAGS) $(INCLUDE) $(BN_OBJ) -L ./src/libft -lft -o $(BONUS)
	@echo "\x1b[32;1m Checker is done, RUN IT! \x1b[0m"

$(LIBFT):
	@make -C ./src/libft

clean:
	@$(RM) $(OBJ) $(BN_OBJ)
	@make fclean -C ./src/libft

fclean: clean
	@$(RM) $(NAME) $(BONUS)

re: fclean all

%.o:%.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY: all clean fclean re
