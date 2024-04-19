/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:56:32 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/19 23:23:30 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>

# define TEXT \
	"You must use this program like this. \
 \n./ push_swap \"arguments\" or like this argument argument ..."

typedef struct t_node
{
	int			data;
	struct node	*next;
}				t_stack;

int				check_args(int ac, char **av);
char			*join_args(int ac, char **av);
int				parse_data(int ac, char **av, long **int_arr);
// char			**fill_lst(int ac, char **av, t_stack *stackA);
int				is_digit(char *str);
int				is_space(char **av);
int				arr_size(char **arr);
void			print_arr(char **res);
void			throw_error(char *txt);
void			*memory_free(char **arr);
void			print_arr_2(long *arr, int len);
void			arr_validate(char **arr);
void			is_duplicate(long *arr, int len);
void			max_min_value(long *arr, int len);
void			is_sorted(long *arr, int len);
char			*join_args(int ac, char **av);

#endif
