#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft.h"
# include <stdio.h>
# include <stdlib.h>

# define TEXT "You must use this program like this. \n./ push_swap \"arguments\" or like this argument argument ..."

typedef struct node
{
	int			data;
	struct node	*next;
}				stack;

void			check_args(int ac, char **av);
int				is_digit(char *str);
int				is_space(char **av);
int				arr_size(char **arr);
#endif
