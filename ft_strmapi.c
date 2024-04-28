/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:36:26 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:38 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen(s)+1 * sizeof(char));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
/* char ft_toupper_wrapper(unsigned int i, char c)
{
    return ft_toupper(c);
}
int main()
{
char s1 [] = "Otmane";
printf("%s",ft_strmapi(s1,ft_toupper_wrapper));
} */