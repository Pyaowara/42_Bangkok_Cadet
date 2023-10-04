/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:27:57 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/24 17:35:10 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isascii('a'), isascii('a'));
// 	printf("%d and %d\n", ft_isascii('Z'), isascii('Z'));
// 	printf("%d and %d\n", ft_isascii(-69), isascii(-69));
// 	printf("%d and %d\n", ft_isascii(' '), isascii(' '));
// 	printf("%d and %d\n", ft_isascii(0), isascii(0));
// 	printf("%d and %d\n", ft_isascii('1'), isascii('1'));
// 	printf("%d and %d\n", ft_isascii('\n'), isascii('\n'));
// 	printf("%d and %d\n", ft_isascii(-1), isascii(-1));
// 	printf("%d and %d\n", ft_isascii(9), isascii(9));
// }