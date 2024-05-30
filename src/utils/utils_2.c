/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:36:41 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/30 18:20:36 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*memory_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
	return (NULL);
}

int	character_check(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i])
	{
		len++;
		i++;
	}
	if (len > 10)
		return (0);
	return (1);
}

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

int	is_sorted_stack(t_stack **stack)
{
	t_stack	*head;
	int		tmp;

	head = *stack;
	tmp = head->content;
	while (head)
	{
		if (tmp > head->content)
			return (0);
		tmp = head->content;
		head = head->next;
	}
	return (1);
}

int	ft_log2(unsigned int n)
{
	int	result;

	result = -1;
	while (n)
	{
		n >>= 1;
		result++;
	}
	return (result);
}
