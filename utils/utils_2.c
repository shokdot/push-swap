/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:36:41 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/24 22:09:17 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_arr_2(long *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		printf("long_int = [%ld]\n", arr[i++]);
}

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

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!(*stack))
		return ;
	tmp = *stack;
	while (tmp->next)
	{
		tmp = tmp->next;
		free(tmp);
	}
	free(*stack);
	stack = NULL;
}
