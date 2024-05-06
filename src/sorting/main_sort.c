/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:15:06 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/06 17:15:00 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	fn_step(int len)
{
	return (ft_sqrt(len) + ft_log2(len) - 1);
}

void	phase1(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	count;
	int	step;

	count = 0;
	step = fn_step(len);
	while (count < len)
	{
		if ((*stack_a)->index <= count)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			count++;
		}
		else if ((*stack_a)->index <= count + step)
		{
			pb(stack_a, stack_b);
			count++;
		}
		else
			ra(stack_a);
	}
}

void	phase2(t_stack **stack_a, t_stack **stack_b, int len)
{
	int	max_index;
	int	size;
	int	index;

	indexing(stack_b);
	size = len;
	while (stack_b && (*stack_b) && size)
	{
		max_index = size - 1;
		index = big_index(stack_b);
		while ((*stack_b)->index != max_index)
		{
			if (index <= size / 2)
				rb(stack_b);
			else
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
		size--;
	}
}

void	main_sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	phase1(stack_a, stack_b, len);
	phase2(stack_a, stack_b, len);
}
