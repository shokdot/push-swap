/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:56:32 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/11 22:53:51 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>

// PARSING

int		check_args(int ac, char **av);
char	*join_args(int ac, char **av);
int		parse_data(int ac, char **av, long **int_arr);
int		is_digit(char *str);
void	arr_validate(char **arr);
void	is_duplicate(long *arr, int len);
void	max_min_value(long *arr, int len);
void	is_sorted(long *arr, int len);
void	fill_stack(long *arr, t_stack **stackA, t_stack **stackB, int len);

// UTILS

int		is_space(char **av);
int		arr_size(char **arr);
void	throw_error(char *txt);
void	*memory_free(char **arr);
int		character_check(char *str);
void	free_stack(t_stack **stack);
void	indexing(t_stack **stack);
int		is_sorted_stack(t_stack **stack);
int		find_min_index(t_stack **stack);
int		ft_sqrt(int nb);
int		ft_log2(unsigned int n);
int		big_index(t_stack **stack);

// OPERATIONS
int		sa(t_stack **stackA, int flag);
int		sb(t_stack **stackB, int flag);
int		ss(t_stack **stackA, t_stack **stackB, int flag);
int		pa(t_stack **stack_a, t_stack **stack_b, int flag);
int		pb(t_stack **stackA, t_stack **stackB, int flag);
int		ra(t_stack **stack_a, int flag);
int		rb(t_stack **stack_b, int flag);
int		rr(t_stack **stack_a, t_stack **stack_b, int flag);
int		rra(t_stack **stack_a, int flag);
int		rrb(t_stack **stack_b, int flag);
int		rrr(t_stack **stack_a, t_stack **stack_b, int flag);

// Sorting
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
void	my_sort(t_stack **stack_a, t_stack **stack_b, int len);
void	main_sort(t_stack **stack_a, t_stack **stack_b, int len);

#endif
