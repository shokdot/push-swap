/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 22:36:41 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/19 00:07:58 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	arr_size2(int *arr)
{
	int	i;

	i = 0;
	while (arr[i] != INT_MAX)
		i++;
	return (i);
}

void	print_arr_2(long *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
		printf("lol = [%ld]\n", arr[i++]);
}
