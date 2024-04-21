/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:19:25 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/21 21:28:35 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	print_stack(t_stack **stackA)
{
	t_stack	*current;

	current = *stackA;
	while (current != NULL)
	{
		printf("%d ", (int)current->content);
		current = current->next;
	}
	printf("\n");
}

void	fill_stack(long *arr, t_stack **stackA, t_stack **stackB, int len)
{
	int		i;
	t_stack	*tmp;

	tmp = ft_lstnew(0);
	ft_lstadd_back(stackB, tmp);
	i = 0;
	while (i < len)
	{
		tmp = ft_lstnew((int)arr[i]);
		ft_lstadd_back(stackA, tmp);
		i++;
	}
}
