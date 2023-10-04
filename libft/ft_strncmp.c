/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:40:20 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 14:43:17 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <string.h>
// int	main()
// {
// 	char	*a = "123459";
// 	char	*b = "123456";
// 	ft_putnbr_fd(ft_strncmp(a,b,ft_strlen(a)), 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(ft_strncmp(a,b,2), 1);
// }