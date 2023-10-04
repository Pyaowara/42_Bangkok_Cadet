/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:48:02 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/24 17:12:30 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	pos;
	int	not_num;

	not_num = 1;
	num = 0;
	pos = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'\
	|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			pos = -1;
		str++;
	}
	while (*str && not_num)
	{
		if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');
		else
			not_num = 0;
		str++;
	}
	return (num * pos);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%d\n", ft_atoi("Hello1321512"));
// 	printf("%d\n", atoi("Hello1321512"));
// 	printf("%d\n", ft_atoi("123252151"));
// 	printf("%d\n", atoi("123252151"));
// 	printf("%d\n", ft_atoi("-12321"));
// 	printf("%d\n", atoi("-12321"));
// 	printf("%d\n", ft_atoi("-+2132131"));
// 	printf("%d\n", atoi("-+2132131"));
// 	printf("%d\n", ft_atoi("   2132h131"));
// 	printf("%d\n", atoi("   2132h131"));
// 	printf("%d\n", ft_atoi("++++2132131"));
// 	printf("%d\n", atoi("++++2132131"));
// }