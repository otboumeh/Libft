/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:19:41 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:17 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*  void ft_toupper_wrapper(unsigned int i, char *c)
{
    *c = ft_toupper(*c);
}
int main()
{
char s1 [] = "Otmane";
ft_striteri(s1,ft_toupper_wrapper);
printf("%s",s1);
}  */