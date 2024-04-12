NAME = libft.a
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_substr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_split.c

BONUS_SRC = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJS = $(SRC:.c=.o)
BOUNUS_OBJS = $(BONUS_SRC:.c=.o)
RM = rm -f
C_FLAGS = -Wall -Wextra -Werror -c

all:$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus:	$(BOUNUS_OBJS)
	ar rc $(NAME) $(BOUNUS_OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS) $(BOUNUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re:fclean all

%.o:%.c
	cc $(C_FLAGS) $< -o $@

.PHONY: all bonus clean fclean re
