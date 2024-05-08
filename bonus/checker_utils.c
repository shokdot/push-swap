/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:31:28 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/08 21:58:30 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	execute(char *command, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(command, "sa\n"))
		sa(stack_a, 0);
	else if (!ft_strcmp(command, "sb\n"))
		sb(stack_b, 0);
	else if (!ft_strcmp(command, "ss\n"))
		ss(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "pa\n"))
		pa(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "pb\n"))
		pb(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "ra\n"))
		ra(stack_a, 0);
	else if (!ft_strcmp(command, "rb\n"))
		rb(stack_b, 0);
	else if (!ft_strcmp(command, "rr\n"))
		rr(stack_a, stack_b, 0);
	else if (!ft_strcmp(command, "rra\n"))
		rra(stack_a, 0);
	else if (!ft_strcmp(command, "rrb\n"))
		rrb(stack_b, 0);
	else if (!ft_strcmp(command, "rrr\n"))
		rrr(stack_a, stack_b, 0);
	else
		return (0);
	return (1);
}

void	check(t_stack **stack_a, t_stack **stack_b)
{
	if (is_sorted_stack(stack_a) && (*stack_b) == NULL)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

int	read_commands(t_stack **stack_a, t_stack **stack_b)
{
	char	*command;

	command = NULL;
	while (1)
	{
		command = get_next_line(0);
		if (!command)
			break ;
		if (!execute(command, stack_a, stack_b))
		{
			free(command);
			get_next_line(-1);
			ft_putendl_fd("Error", 1);
			return (1);
		}
		free(command);
	}
	check(stack_a, stack_b);
	return (0);
}
