/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:57 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/19 00:07:31 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

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

long	*fill_arr(char **arr, int len)
{
	long	*res;
	int		i;

	i = 0;
	res = (long *)malloc(sizeof(long) * (len));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = ft_atoi(arr[i]);
		i++;
	}
	return (res);
}

char	*join_args(int ac, char **av)
{
	int		i;
	char	*arr;

	i = 1;
	arr = ft_strdup(av[i++]);
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

void	is_duplicate(long *arr, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (arr[i] == arr[j])
				throw_error("Error");
			j++;
		}
		i++;
	}
}

void	parse_data(int ac, char **av)
{
	char	*arr;
	long	*int_arr;
	char	**splited_arr;
	int		len;

	check_args(ac, av);
	arr = join_args(ac, av);
	splited_arr = ft_split(arr, ' ');
	free(arr);
	arr = NULL;
	arr_validate(splited_arr);
	len = arr_size(splited_arr);
	int_arr = fill_arr(splited_arr, len);
	is_duplicate(int_arr, len);
	print_arr_2(int_arr, len);
	return ;
}
