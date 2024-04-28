/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:31:28 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:34 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i ;

	i = 0 ;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int main (void)
{
char *c ="Otmane";
printf("%d",ft_strlen(c));
return 0 ;
} */