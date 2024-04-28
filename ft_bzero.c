/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:42:40 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:03:23 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*temp;
	size_t	i;

	temp = (char *) s;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/* int main(void) 
{
    char str[] = "Otmane Boumehdi"; 

	ft_bzero(str, 5);
	printf("%s\n", str);
}  */