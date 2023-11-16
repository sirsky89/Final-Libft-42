/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-zub <abin-zub@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:55:51 by abin-zub          #+#    #+#             */
/*   Updated: 2023/11/15 15:55:52 by abin-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *current;
	t_list *new_node;
	
	new_list = NULL;
	current = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		if (!current)
			new_list = new_node;
		else
			current->next = new_node;
		
		current = new_node;
		lst = lst->next;
	}
	return (new_list);
}
