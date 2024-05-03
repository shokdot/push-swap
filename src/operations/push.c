/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:20:05 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/03 23:32:41 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push(t_stack **from, t_stack **to)
{
	t_stack	*head_from;
	t_stack	*head_to;
	t_stack	*tmp;

	head_from = *from;
	head_to = *to;
	if (ft_lstsize(head_from) < 1)
		return (-1);
	tmp = head_from;
	head_from = head_from->next;
	*from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*to = tmp;
	}
	return (0);
}

int	pa(t_stack **stackA, t_stack **stackB)
{
	if (push(stackB, stackA) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack **stackA, t_stack **stackB)
{
	if (push(stackA, stackB) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
