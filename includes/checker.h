/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 22:15:17 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/11 22:15:18 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../includes/get_next_line.h"
# include "../includes/push_swap.h"
# include <stdio.h>
# include <unistd.h>

int	read_commands(t_stack **stack_a, t_stack **stack_b);
int	ft_strcmp(char *s1, char *s2);
#endif
