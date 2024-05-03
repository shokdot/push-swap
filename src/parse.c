/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:57 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/03 23:31:55 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	check_args(int ac, char **av)
{
	if (ac < 2)
		exit(EXIT_SUCCESS);
	else if (!is_space(&av[1]))
		throw_error("Error");
	return (0);
}

int	parse_data(int ac, char **av, long **res)
{
	char	*arr;
	long	*int_arr;
	char	**splited_arr;
	int		len;
	int		i;

	check_args(ac, av);
	arr = join_args(ac, av);
	splited_arr = ft_split(arr, ' ');
	free(arr);
	arr = NULL;
	arr_validate(splited_arr);
	len = arr_size(splited_arr);
	int_arr = fill_arr(splited_arr, len);
	splited_arr = memory_free(splited_arr);
	is_duplicate(int_arr, len);
	max_min_value(int_arr, len);
	is_sorted(int_arr, len);
	*res = int_arr;
	return (len);
}
