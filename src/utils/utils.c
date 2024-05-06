/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 21:56:53 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/05 15:27:39 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_digit(char *str)
{
	int	i;

	i = 0;
	if (str[i + 1] && (str[i] == '+' || str[i] == '-'))
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

void	throw_error(char *txt)
{
	ft_putendl_fd(txt, 2);
	exit(EXIT_FAILURE);
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 2;
	while ((i <= (nb / 2)) && i <= 46340 && (i * i) < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}
