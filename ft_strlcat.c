/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:43:19 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:26 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}

/* int	main(void)
{
	char dst[] = "Otmane";
	char src[] = " Boumehdi";
	printf("%zu", ft_strlcat(dst, src, 1));
}  */