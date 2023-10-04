/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:27:57 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/24 17:36:38 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > '9' || c < '0')
		return (0);
	else
		return (1);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isdigit('a'), isdigit('a'));
// 	printf("%d and %d\n", ft_isdigit('Z'), isdigit('Z'));
// 	printf("%d and %d\n", ft_isdigit(-69), isdigit(-69));
// 	printf("%d and %d\n", ft_isdigit(' '), isdigit(' '));
// 	printf("%d and %d\n", ft_isdigit(0), isdigit(0));
// 	printf("%d and %d\n", ft_isdigit('1'), isdigit('1'));
// 	printf("%d and %d\n", ft_isdigit('\n'), isdigit('\n'));
// 	printf("%d and %d\n", ft_isdigit(-1), isdigit(-1));
// 	printf("%d and %d\n", ft_isdigit(9), isdigit(9));
// 	printf("%d and %d\n", ft_isdigit('6'), isdigit('6'));
// }