/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:27:41 by healeksa          #+#    #+#             */
/*   Updated: 2024/06/20 18:05:04 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	int		arr_len;
	long	*int_arr;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	arr_len = parse_data(ac, av, &int_arr);
	fill_stack(int_arr, &stack_a, &stack_b, arr_len);
	free(int_arr);
	int_arr = NULL;
	read_commands(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
