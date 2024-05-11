/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:20:05 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/11 22:45:28 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	push(t_stack **from, t_stack **to)
{
	t_stack	*tmp;
	t_stack	*head_to;

	tmp = (*from);
	head_to = *to;
	if (ft_lstsize(tmp) < 1)
		return (-1);
	(*from) = (*from)->next;
	if ((*from))
		(*from)->prev = NULL;
	if (!head_to)
	{
		tmp->prev = NULL;
		tmp->next = NULL;
		*to = tmp;
	}
	else
	{
		tmp->next = head_to;
		head_to->prev = tmp;
		tmp->prev = NULL;
		*to = tmp;
	}
	return (0);
}

int	pa(t_stack **stackA, t_stack **stackB, int flag)
{
	if (push(stackB, stackA) == -1)
		return (-1);
	if (flag)
		ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack **stackA, t_stack **stackB, int flag)
{
	if (push(stackA, stackB) == -1)
		return (-1);
	if (flag)
		ft_putendl_fd("pb", 1);
	return (0);
}
