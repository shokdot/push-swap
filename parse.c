/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:57 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/18 17:06:04 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	throw_error(char *txt)
{
	ft_putendl_fd(txt, 1);
	exit(EXIT_FAILURE);
}

void	memory_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	arr_validate(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!is_digit(arr[i]))
		{
			memory_free(arr);
			throw_error("Error");
		}
		i++;
	}
}

char	*join_args(int ac, char **av)
{
	int		i;
	char	*arr;

	i = 1;
	arr = av[i++];
	while (i < ac)
	{
		arr = ft_strjoin(arr, " ");
		arr = ft_strjoin(arr, av[i++]);
	}
	return (arr);
}

int	check_args(int ac, char **av)
{
	if (ac < 2 || !is_space(&av[1]))
		throw_error(TEXT);
	return (0);
}

void	parse_data(int ac, char **av)
{
	char	*arr;
	char	**splited_arr;

	check_args(ac, av);
	arr = join_args(ac, av);
	splited_arr = ft_split(arr, ' ');
	free(arr);
	arr_validate(splited_arr);
	print_arr(splited_arr);
}

// res = fill_arr(ac, av);
// print_arr(res);
// arr_validate(res);
// return (res);
