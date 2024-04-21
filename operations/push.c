/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:20:05 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/21 22:53:25 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	tmp->next = head_to;
	*to = tmp;
	*from = head_from;
	return (0);
}

int	pa(t_stack **stackA, t_stack **stackB)
{
	if (ft_lstsize(*stackA) < 1)
		return (-1);
	push(stackA, stackB);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_stack **stackA, t_stack **stackB)
{
	if (ft_lstsize(*stackA) < 1)
		return (-1);
	push(stackB, stackA);
	ft_putendl_fd("pb", 1);
	return (0);
}
