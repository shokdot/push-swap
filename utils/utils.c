/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:56:53 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/18 22:39:14 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_space(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!((av[i][j] >= 9 && av[i][j] <= 13) || av[i][j] == 32))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	arr_size(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

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

void	throw_error(char *txt)
{
	ft_putendl_fd(txt, 1);
	exit(EXIT_FAILURE);
}
