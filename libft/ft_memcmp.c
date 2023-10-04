/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:58:49 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 12:47:35 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*str2;
	size_t				i;

	str = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// int	main()
// {
// 	const void	*s1 = "Hello World";
// 	const void	*s2 = "Hello world";
// 	ft_putnbr_fd(ft_memcmp(s1, s2, ft_strlen((const char *)s1)), 1);
// 	ft_putnbr_fd(memcmp(s1, s2, ft_strlen((const char *)s1)), 1);
// }