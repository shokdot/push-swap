/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:41:05 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/21 19:09:41 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(int))
{
	t_stack	*present;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		present = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = present;
	}
	free(*lst);
}
