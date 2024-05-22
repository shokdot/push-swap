/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:19:25 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/22 22:50:15 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_stack(long *arr, t_stack **stackA, t_stack **stackB, int len)
{
	int		i;
	t_stack	*tmp;

	*stackB = NULL;
	i = 0;
	while (i < len)
	{
		tmp = ft_lstnew((int)arr[i], -1);
		ft_lstadd_back(stackA, tmp);
		i++;
	}
	indexing(stackA);
}
