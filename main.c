/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:00:08 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/12 22:23:05 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	**res;

	(void)argv;
	if (argc == 1)
	{
		ft_putendl_fd("Error", 1);
		exit(1);
	}
	else if (argc == 2)
	{
		res = ft_split(argv[1], ' ');
		ft_putendl_fd(res[0], 1);
		ft_putendl_fd(res[1], 1);
		ft_putendl_fd(res[2], 1);
		ft_putendl_fd(res[3], 1);
	}
	else
	{
		// fill arrr
	}
	return (0);
}
