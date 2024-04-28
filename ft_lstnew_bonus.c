/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:36:38 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:04:18 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem -> content = content;
	elem -> next = NULL;
	return (elem);
}
/* int main()
{
    t_list *new_elem = ft_lstnew("Hello, world!");
    if (new_elem)
        printf("Nouvel élément créé.\n");
    return 0;
} */