/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 22:51:00 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/02 21:36:57 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*get_min(t_stack **stack)
{
	t_stack	*min_stack;
	t_stack	*head;
	int		had_min;

	head = *stack;
	min_stack = NULL;
	had_min = 0;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!had_min
					|| min_stack->content > head->content))
			{
				min_stack = head;
				had_min = 1;
			}
			head = head->next;
		}
	}
	return (min_stack);
}

void	indexing(t_stack **stack)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = get_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_min(stack);
	}
}

int	find_min_index(t_stack **stack)
{
	t_stack	*head;
	int		i;
	int		tmp_index;
	int		index;

	head = *stack;
	i = 0;
	index = 0;
	tmp_index = head->index;
	while (head)
	{
		if (tmp_index > head->index)
		{
			tmp_index = head->index;
			index = i;
		}
		i++;
		head = head->next;
	}
	return (index);
}
