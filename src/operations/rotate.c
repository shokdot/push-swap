/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 23:46:49 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/08 18:17:36 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	tmp = *stack;
	if (ft_lstsize(tmp) < 2)
		return (-1);
	last = ft_lstlast(tmp);
	*stack = tmp->next;
	last->next = tmp;
	tmp->next = NULL;
	return (0);
}

int	ra(t_stack **stack_a, int flag)
{
	if (rotate(stack_a) == -1)
		return (-1);
	if (flag)
		ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_stack **stack_b, int flag)
{
	if (rotate(stack_b) == -1)
		return (-1);
	if (flag)
		ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_stack **stack_a, t_stack **stack_b, int flag)
{
	if (ft_lstsize(*stack_a) < 2 || ft_lstsize(*stack_b) < 2)
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	if (flag)
		ft_putendl_fd("rr", 1);
	return (0);
}
