/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:09:57 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/16 21:22:13 by healeksa         ###   ########.fr       */
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

int	is_digit(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!is_digit(&av[i]))
			return (1);
		i++;
	}
	return (0);
}

// int	validate(char **av)
// {
// }

int	is_sp(char *s)
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

int	is_space(char **av)
{
	int		i;
	char	*c;

	i = 0;
	while (av[i])
	{
		c = av[i];
		if (!is_sp(av[i]))
			return (1);
		i++;
	}
	return (0);
}

char	**fill_lst(int ac, char **av)
{
	int		i;
	char	**res;
	int		j;
	int		k;

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
	}
	return (res);
}

void	lst_validate(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (is_digit(arr[i]))
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

	if (ac < 2 || !is_space(av + 1))
	{
		ft_putendl_fd(TEXT, 1);
		exit(EXIT_FAILURE);
	}
	res = fill_lst(ac, av);
	// lst_validate(res);
}
