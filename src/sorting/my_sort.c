/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:59:46 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/30 18:21:03 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **stack_a)
{
	t_stack	*head;

	head = *stack_a;
	if (head->content < head->next->content)
	{
		rra(stack_a, 1);
		if (!is_sorted_stack(stack_a))
			sa(stack_a, 1);
	}
	else if (head->content > head->next->content)
	{
		if (head->content < head->next->next->content)
			sa(stack_a, 1);
		else
		{
			ra(stack_a, 1);
			if (!is_sorted_stack(stack_a))
				sa(stack_a, 1);
		}
	}
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	if (min_index == 1)
		ra(stack_a, 1);
	else if (min_index == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (min_index == 3)
		rra(stack_a, 1);
	if (is_sorted_stack(stack_a))
		return ;
	pb(stack_a, stack_b, 1);
	sort_3(stack_a);
	pa(stack_a, stack_b, 1);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	if (min_index == 1)
		ra(stack_a, 1);
	else if (min_index == 2)
	{
		ra(stack_a, 1);
		ra(stack_a, 1);
	}
	else if (min_index == 3)
	{
		rra(stack_a, 1);
		rra(stack_a, 1);
	}
	else if (min_index == 4)
		rra(stack_a, 1);
	if (is_sorted_stack(stack_a))
		return ;
	pb(stack_a, stack_b, 1);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b, 1);
}

void	my_sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	if (len == 2)
		sa(stack_a, 1);
	else if (len == 3)
		sort_3(stack_a);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
}
