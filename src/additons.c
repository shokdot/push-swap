/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additons.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:39:52 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/08 17:27:24 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_arr(char **res)
{
	int	i;
	int	j;

	i = 0;
	j = arr_size(res);
	while (i < j)
	{
		printf("%s\n", res[i]);
		i++;
	}
}

void	print_arr_2(long *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		printf("long_int = [%ld]\n", arr[i++]);
}

void	print_stack(t_stack **stackA)
{
	t_stack	*current;

	current = *stackA;
	while (current != NULL)
	{
		printf("contet[%d]   index[%d] \n", (int)current->content,
			current->index);
		current = current->next;
	}
	printf("\n");
}
