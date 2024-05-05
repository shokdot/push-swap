/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:00:08 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/05 14:45:02 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	long	*int_arr;
	int		arr_len;
	t_stack	*stack_a;
	t_stack	*stack_b;

	arr_len = parse_data(argc, argv, &int_arr);
	fill_stack(int_arr, &stack_a, &stack_b, arr_len);
	// print_stack(&stack_a);
	sort_stack(&stack_a, &stack_b);
	// print_stack(&stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
