/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:27:41 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/06 21:50:19 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"
#include "../includes/push_swap.h"
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int		arr_len;
	long	*int_arr;
	t_stack	*stack_a;
	t_stack	*stack_b;

	arr_len = parse_data(ac, av, &int_arr);
	fill_stack(int_arr, &stack_a, &stack_b, arr_len);
	// read_byte = 1;
	// while (read_byte != 0)
	// {
	// 	rbit = read(1, buffer, 20);
	// 	lol = get_next_line(0);
	// 	if (!lol)
	// 	{
	// 		break ;
	// 	}
	// }
	// printf("hello world\n");
	return (0);
}
