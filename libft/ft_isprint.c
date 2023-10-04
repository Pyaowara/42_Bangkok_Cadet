/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:27:57 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/24 17:36:43 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isprint('a'), isprint('a'));
// 	printf("%d and %d\n", ft_isprint('Z'), isprint('Z'));
// 	printf("%d and %d\n", ft_isprint(-69), isprint(-69));
// 	printf("%d and %d\n", ft_isprint(' '), isprint(' '));
// 	printf("%d and %d\n", ft_isprint(0), isprint(0));
// 	printf("%d and %d\n", ft_isprint('1'), isprint('1'));
// 	printf("%d and %d\n", ft_isprint('\n'), isprint('\n'));
// 	printf("%d and %d\n", ft_isprint(-1), isprint(-1));
// 	printf("%d and %d\n", ft_isprint(9), isprint(9));
// 	printf("%d and %d\n", ft_isprint('6'), isprint('6'));
// }