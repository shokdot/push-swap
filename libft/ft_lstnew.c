/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:50:48 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/21 19:08:50 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
