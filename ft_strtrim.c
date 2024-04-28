/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otboumeh <otboumeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:47:52 by otboumeh          #+#    #+#             */
/*   Updated: 2024/04/27 12:05:55 by otboumeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/* int main()
{
	char str[] = "aabbaaOtmaneaaabbab";
	char set[] = "ab";
	printf("%s",ft_strtrim(str,set));
} */