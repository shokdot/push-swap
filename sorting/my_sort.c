/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:59:46 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/02 21:33:44 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;

	head = *stack_a;
	if (head->content < head->next->content)
	{
		rra(stack_a);
		if (!is_sorted_stack(stack_a))
			sa(stack_a);
	}
	else if (head->content > head->next->content)
	{
		if (head->content < head->next->next->content)
			sa(stack_a);
		else
		{
			ra(stack_a);
			if (!is_sorted_stack(stack_a))
				sa(stack_a);
		}
	}
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	if (min_index == 1)
		ra(stack_a);
	else if (min_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3)
		rra(stack_a);
	if (is_sorted_stack(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min_index(stack_a);
	if (min_index == 1)
		ra(stack_a);
	else if (min_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (min_index == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (min_index == 4)
		rra(stack_a);
	if (is_sorted_stack(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	my_sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	if (len == 2)
		sa(stack_a);
	else if (len == 3)
		sort_3(stack_a, stack_b);
	else if (len == 4)
		sort_4(stack_a, stack_b);
	else if (len == 5)
		sort_5(stack_a, stack_b);
}
