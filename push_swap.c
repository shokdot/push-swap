/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:00:08 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/17 22:08:57 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdlib.h>

// int	ft_count_lst(char **lst)
// {
// 	int	i;

// 	i = 0;
// 	while (lst[i] != NULL)
// 		i++;
// 	return (i);
// }

// void	fill_stack(stack **stack, char **argv)
// {
// 	int	i;
// 	int	count;

// 	count = ft_count_lst(argv);
// 	i = 0;
// 	while (i < count)
// 	{
// 		printf("[%s]\n", argv[i]);
// 		*stack = (struct node *)malloc(sizeof(struct node));
// 		(*stack)->data = ft_atoi(argv[i]);
// 		stack = &(*stack)->next;
// 		i++;
// 	}
// }

void	example_fn(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		printf("%d\n", ft_atoi(res[i]));
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**res;
	int		i;
	t_stack	*stackA;

	// stack	*stackB;
	// int		i;
	parse_data(argc, argv);
	// res = fill_lst(argc, argv, stackA);
	// i = 0;
	// while (res[i])
	// {
	// 	printf("%s\n", res[i]);
	// 	i++;
	// }
	// example_fn(res);
	// fill_stack(&stackA, res);
	// printf("%d\n", stackA->data);
	// printf("%d\n", stackA->next->data);
	return (0);
}
