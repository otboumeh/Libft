/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:08:56 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:04:44 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*temp;
	size_t			i ;

	i = 0;
	temp = b;
	while (i < len)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* int main(void) 
{
	char str[] = "Otmane Boumehdi"; 
	
	ft_memset(str, 'O', 3);
	printf("%s\n", str);
}  */