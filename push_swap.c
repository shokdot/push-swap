/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:00:08 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/20 20:51:03 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	long	*int_arr;
	int		arr_len;
	t_stack	*stackA;
	t_stack	*stackB;

	arr_len = parse_data(argc, argv, &int_arr);
	fill_stack(int_arr, &stackA, arr_len);
	// print_arr_2(int_arr, arr_len);
	print_stack(&stackA);
	return (0);
}
