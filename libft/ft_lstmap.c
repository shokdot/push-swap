/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: healeksa <healeksa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:29:05 by healeksa          #+#    #+#             */
/*   Updated: 2024/04/21 19:12:42 by healeksa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_stack	*ft_lstmap(t_stack *lst, void *(*f)(int), void (*del)(int))
{
	t_stack	*new_list;
	t_stack	*res;

	res = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new_list = ft_lstnew((int)f(lst->content));
		if (!new_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new_list);
		lst = lst->next;
	}
	return (res);
}
