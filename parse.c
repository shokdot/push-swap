/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:57 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/15 23:36:55 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	arr_size(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	is_space(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
			return (0);
		i++;
	}
	return (1);
}

void	check_args(int ac, char **av)
{
	int		i;
	char	**res;
	int		j;
	t_list	*tmp;
	t_list	*lst;
	int		value;
	int		k;

	// char	*lst;
	if (ac < 2 || !av[1][0] || is_space(av[1]))
	{
		ft_putendl_fd(TEXT, 1);
		exit(EXIT_FAILURE);
	}
	i = 1;
	while (i < ac)
	{
		res = ft_split(av[i], ' ');
		j = arr_size(res);
		k = 0;
		while (k < j)
		{
			printf("%s\n", res[k]);
			k++;
		}
		i++;
		// res = ft_split(av[i], ' ');
		// if (!res)
		// 	return ;
		// j = arr_size(res);
		// while (j > 0)
		// {
		// 	printf("%s\n", res[j]);
		// 	// value = ft_atoi(res[j]);
		// 	// printf("value = %d\n", value);
		// 	// tmp = ft_lstnew(&value);
		// 	// ft_lstadd_back(&lst, tmp);
		// 	j--;
		// }
	}
}
