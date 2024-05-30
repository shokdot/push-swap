/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 22:15:17 by healeksa          #+#    #+#             */
/*   Updated: 2024/05/30 22:01:32 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"
# include <stdio.h>
# include <unistd.h>

int	read_commands(t_stack **stack_a, t_stack **stack_b);
int	ft_strcmp(char *s1, char *s2);

#endif
