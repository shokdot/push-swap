/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 18:49:01 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/21 19:07:31 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_stack **stack)
{
	t_stack	*head;
	int		tmp;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tmp = head->content;
	head->content = head->next->content;
	head->next->content = tmp;
	return (0);
}

int	sa(t_stack **stackA)
{
	if (swap(stackA) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_stack **stackB)
{
	if (swap(stackB) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_stack **stackA, t_stack **stackB)
{
	if (ft_lstsize(*stackA) < 2 || ft_lstsize(*stackB) < 2)
		return (-1);
	sa(stackA);
	sb(stackB);
	ft_putendl_fd("ss", 1);
	return (0);
}
