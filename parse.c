/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:57 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/16 22:11:07 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

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

char	**fill_arr(int ac, char **av)
{
	int		i;
	char	**res;

	i = 1;
	while (i < ac)
		res = ft_split(av[i++], ' ');
	return (res);
}

void	lst_validate(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!is_digit(arr[i]))
		{
			ft_putendl_fd("Error", 1);
			exit(EXIT_FAILURE);
		}
		i++;
	}
}

void	check_args(int ac, char **av)
{
	char	**res;

	if (ac < 2 || !is_space(&av[1]))
	{
		ft_putendl_fd(TEXT, 1);
		exit(EXIT_FAILURE);
	}
	res = fill_arr(ac, av);
	lst_validate(res);
	print_arr(res);
}
