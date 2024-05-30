/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:27:41 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/30 20:16:08 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int ac, char **av)
{
	int		arr_len;
	long	*int_arr;
	t_stack	*stack_a;
	t_stack	*stack_b;

	arr_len = parse_data(ac, av, &int_arr);
	fill_stack(int_arr, &stack_a, &stack_b, arr_len);
	read_commands(&stack_a, &stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
