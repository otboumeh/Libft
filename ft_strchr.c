/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:45:00 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:09 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	a;

	i = 0;
	a = (char) c;
	while (s[i])
	{
		if (s[i] == a)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (s[i] == a)
		return ((char *) &s[i]);
	return (0);
}
/* int main(void)
{
char *str = "Otmane";
printf("Le premiers resultat est :%c\n",strchr(str,'O'));
printf("le dexieme resultat est :%c",ft_strchr(str,'O'));
}  */
