/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 22:08:07 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/03 23:33:04 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	arr_validate(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!is_digit(arr[i]) || !character_check(arr[i]))
		{
			memory_free(arr);
			throw_error("Error");
		}
		i++;
	}
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
			{
				free(arr);
				throw_error("Error");
			}
			j++;
		}
		i++;
	}
}

void	max_min_value(long *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] > INT_MAX || arr[i] < INT_MIN)
		{
			free(arr);
			throw_error("Error");
		}
		i++;
	}
}

void	is_sorted(long *arr, int len)
{
	int		i;
	long	tmp;

	i = 0;
	while (i < len - 1)
	{
		if (!(arr[i] < arr[i + 1]))
			return ;
		i++;
	}
	free(arr);
	exit(EXIT_SUCCESS);
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
