/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:12:51 by patyaowa          #+#    #+#             */
/*   Updated: 2023/10/01 12:13:32 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*str1;
	const char	*str2;
	char		*strr;
	size_t		i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	str1 = s1;
	str2 = s1 + ft_strlen(s1);
	while (str2 > str1 && ft_strchr(set, *(str2 - 1)))
		str2--;
	i = str2 - str1;
	if (i == 0)
		return (ft_strdup(""));
	strr = (char *)malloc(sizeof(char) * (i + 1));
	if (!strr)
		return (NULL);
	ft_strlcpy(strr, str1, i + 1);
	return (strr);
}

// int	main()
// {
// 	ft_putstr_fd(ft_strtrim("Hi my name ello lol", "Hlo "), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(ft_strtrim("HAlo", "Hlo "), 1);
// }