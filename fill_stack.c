/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:19:25 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/20 20:49:57 by healeksa         ###   ########.fr       */
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

void	fill_stack(long *arr, t_stack **stackA, int len)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	while (i < len)
	{
		tmp = ft_lstnew((void *)arr[i]);
		ft_lstadd_back(stackA, tmp);
		i++;
	}
}
