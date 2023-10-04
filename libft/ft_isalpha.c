/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:27:57 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/24 17:35:04 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('Z' >= c && c >= 'A') || ('z' >= c && c >= 'a'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%d and %d\n", ft_isalpha('a'), isalpha('a'));
// 	printf("%d and %d\n", ft_isalpha('Z'), isalpha('Z'));
// 	printf("%d and %d\n", ft_isalpha(' '), isalpha(' '));
// 	printf("%d and %d\n", ft_isalpha('1'), isalpha('1'));
// 	printf("%d and %d\n", ft_isalpha('\n'), isalpha('\n'));
// 	printf("%d and %d\n", ft_isalpha('.'), isalpha('.'));
// }