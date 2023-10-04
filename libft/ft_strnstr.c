/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:26:36 by payaowa           #+#    #+#             */
/*   Updated: 2023/09/27 14:47:31 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	str = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (str);
	while (*haystack && len)
	{
		i = 0;
		str = (char *)haystack;
		while (*haystack == needle[i] && len)
		{
			i++;
			if (needle[i] == 0)
				return (str);
			haystack++;
			len--;
		}
		haystack -= i - 1;
		len += i - 1;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int	main()
// {
// 	char	*haystack = "Hello is it me you looking";
// 	char	*needle = "is it";
// 	ft_putstr_fd(ft_strnstr(haystack, needle, ft_strlen(haystack)), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd(strnstr(haystack, needle, ft_strlen(haystack)), 1);
// 	ft_putchar_fd('\n', 1);
// 	printf("%s", ft_strnstr(haystack, needle, 10));
// 	ft_putchar_fd('\n', 1);
// 	printf("%s", strnstr(haystack, needle, 10));
// }