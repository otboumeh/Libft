/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:35:10 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:50 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			res = (char *)(s + i);
		i++;
	}
	if (s[i] == (unsigned char)c)
		res = (char *)(s + i);
	return (res);
}

/* int main(void)
{
char *str = "Otmane";
printf("Le premiers resultat est :%ld\n",strrchr(str,'\0'));
printf("le dexieme resultat est :%ld",ft_strrchr(str,'\0'));
} */