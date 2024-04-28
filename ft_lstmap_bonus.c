/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:14:34 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:33:17 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_item;
	t_list	*temp;

	if (f == NULL || lst == NULL)
		return (NULL);
	first_item = ft_lstnew(f(lst->content));
	if (first_item == NULL)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
		{
			ft_lstclear(&first_item, del);
			return (NULL);
		}
		ft_lstadd_back(&first_item, temp);
		lst = lst->next;
	}
	return (first_item);
}
