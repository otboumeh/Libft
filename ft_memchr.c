/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 10:48:05 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:04:26 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i ;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main ()
{
	char s[] = "Otmane";
	char c = 'a';
	printf("%s",ft_memchr(s,c,5));
} */