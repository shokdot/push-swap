/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:00:08 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/14 22:46:36 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_count_lst(char **lst)
{
	int	i;

	i = 0;
	while (lst[i] != NULL)
		i++;
	return (i);
}

void	fill_stack(stack **stack, char **argv)
{
	int	i;
	int	count;

	count = ft_count_lst(argv);
	i = 0;
	while (i < count)
	{
		printf("[%s]\n", argv[i]);
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
	int		i;
	char	**res;

	i = 0;
	stackA = NULL;
	stackB = NULL;
	if (argc == 1 || !argv[1][0])
	{
		ft_putendl_fd("Error", 1);
		exit(1);
	}
	while (i < argc)
	{
		res = ft_split(argv[i], ' ');
		i++;
	}
	// else if (argc == 2)
	// 	res = ft_split(argv[1], ' ');
	// else
	// 	res = &argv[1];
	// printf("%s\n", res[0]);
	// printf("%s\n", res[1]);
	fill_stack(&stackA, res);
	// printf("%d\n", stackA->data);
	// printf("%d\n", stackA->next->data);
	return (0);
}
