/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 20:15:06 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/03 23:32:19 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	main_sort(t_stack **stack_a, t_stack **stack_b, int len)
{
	t_stack	*head;
	int		count;
	int		x;

	if (len > 100)
		x = 30;
	else
		x = 15;
	head = *stack_a;
	while (len < count)
	{
		if (head->index <= count)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			count++;
		}
		else if (head->index <= count + x)
		{
			pb(stack_a, stack_b);
			count++;
		}
		else
			ra(stack_a);
	}
}
