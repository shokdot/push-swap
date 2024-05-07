/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 21:31:28 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/07 23:01:10 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	execute(char *command, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strcmp(command, "sa\n"))
		sa(stack_a);
	else if (!ft_strcmp(command, "sb\n"))
		sb(stack_b);
	else if (!ft_strcmp(command, "ss\n"))
		ss(stack_a, stack_b);
	else if (!ft_strcmp(command, "pa\n"))
		pa(stack_a, stack_b);
	else if (!ft_strcmp(command, "pb\n"))
		pb(stack_a, stack_b);
	else if (!ft_strcmp(command, "ra\n"))
		ra(stack_a);
	else if (!ft_strcmp(command, "rb\n"))
		rb(stack_b);
	else if (!ft_strcmp(command, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(command, "rra\n"))
		rra(stack_a);
	else if (!ft_strcmp(command, "rrb\n"))
		rrb(stack_b);
	else if (!ft_strcmp(command, "rrr\n"))
		rrr(stack_a, stack_b);
	return (1);
}

int	read_commands(t_stack **stack_a, t_stack **stack_b)
{
	char	*command;

	command = NULL;
	print_stack(stack_a);
	get_next_line(-5920);
	while (1)
	{
		command = get_next_line(0);
		printf("command = %s", command);
		// if (!ft_strcmp(command, "sa\n"))
		// 	printf("SOS\n");
		// sa(stack_a);
		// if (!ft_strcmp(command, "sa\n"))
		// 	sa(stack_a);
		// printf("%s\n", command);
		// if (!execute(command, stack_a, stack_b))
		// {
		// 	free(command);
		// 	get_next_line(-1);
		// 	return (1);
		// }
		// free(command);
	}
	// printf("\n");
	// print_stack(stack_a);
	return (0);
}
