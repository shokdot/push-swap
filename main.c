/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:00:08 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/13 22:40:43 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	fill_stack(stack **stack, char **argv, int argc)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		*stack = (struct node *)malloc(sizeof(struct node));
		(*stack)->data = ft_atoi(argv[i]);
		stack = &(*stack)->next;
		i++;
	}
}

int	main(int argc, char **argv)
{
	stack	*stackA;
	stack	*stackB;

	stackA = NULL;
	stackB = NULL;
	if (argc == 1 || !argv[1][0])
	{
		ft_putendl_fd("Error", 1);
		exit(1);
	}
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	fill_stack(&stackA, argv, argc);
	printf("%d\n", stackA->data);
	printf("%d\n", stackA->next->data);
	printf("%d\n", stackA->next->next->data);
	return (0);
}
