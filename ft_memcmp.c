/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:09:18 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:04:31 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) d[i] != (unsigned char)s[i])
		{
			return ((unsigned char)d[i] - (unsigned char) s[i]);
		}
		i++;
	}
	return (0);
}
/* int main(void)
{
	char s1[] = "3331";
	char s2[] = "3333";
	printf("%d",ft_memcmp(s1, s2, 5));
} */