/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:27:57 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/24 17:32:31 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('Z' >= c && c >= 'A') || ('z' >= c && c >= 'a') || \
	('9' >= c && c >= '0'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isalnum('a'), isalnum('a'));
// 	printf("%d and %d\n", ft_isalnum('Z'), isalnum('Z'));
// 	printf("%d and %d\n", ft_isalnum(' '), isalnum(' '));
// 	printf("%d and %d\n", ft_isalnum('1'), isalnum('1'));
// 	printf("%d and %d\n", ft_isalnum('\n'), isalnum('\n'));
// 	printf("%d and %d\n", ft_isalnum('.'), isalnum('.'));
// }