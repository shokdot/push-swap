# NAME = libft.a
# SRC = $(wildcard *.c)
# OBJS = $(SRC:.c=.o)
# RM = rm -f
# CFLAGS = -Wall -Wextra -Werror
# HEADERS = $(wildcard ../../includes/*.c)
# INCLUDE = -I ../../includes

# all:$(NAME)

# $(NAME): $(OBJS) $(HEADERS)
# 	@ar rc $(NAME) $(OBJS)
# 	@ranlib $(NAME)

# clean:
# 	@$(RM) $(OBJS)

# fclean: clean
# 	@$(RM) $(NAME)

# re:fclean all

# %.o:%.c
# 	@cc $(C_FLAGS) $(INCLUDE) -c $< -o $@

# .PHONY: all bonus clean fclean re


NAME = libft.a
SRC = $(wildcard *.c)
HEADERS = $(wildcard ../../includes/*.h)
INCLUDE = -I ../../includes
OBJS = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJS) $(HEADERS)
	@echo "\x1b[33;1m Compiling object files"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "\x1b[32;1m Libft is done! \x1b[0m"

clean:
	@$(RM) $(OBJS)
	@echo "\x1b[31;1m Deleting files! \x1b[0m"

fclean: clean
	@$(RM) $(NAME)

re:fclean all

%.o:%.c
	@cc $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY: all bonus clean fclean re
