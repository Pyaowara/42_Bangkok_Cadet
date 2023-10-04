/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:59:51 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 11:44:36 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str = 0;
		str++;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[50];
// 	strcpy(str, "Hello World My name is Markiplier");
// 	char str2[50];
// 	strcpy(str2, "Hello World My name is Markiplier");
// 	printf("%s\n", str);
// 	ft_bzero(str, 1);
// 	printf("%s\n", str);
// 	printf("%s\n", str2);
// 	bzero(str2, 1);
// 	printf("%s\n", str2);
// 	return (0);
// }