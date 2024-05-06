/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:55:37 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/05 15:43:34 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (len <= 5)
		my_sort(stack_a, stack_b, len);
	else
		main_sort(stack_a, stack_b, len);
}
