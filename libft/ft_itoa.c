/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:10:19 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/30 13:47:11 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_findneg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static size_t	ft_finddigit(int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n *= -1;
	if (n == 0)
		return (1);
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	*ft_fitmalloc(char *number, int i, int n)
{
	if (n == 0)
		number[i--] = '0';
	while (n != 0)
	{
		number[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (number);
}

static void	*ft_intmin(char *number)
{
	char	*int_min;
	size_t	i;

	i = 0;
	int_min = "-2147483648";
	while (i < ft_strlen(int_min))
	{
		number[i] = int_min[i];
		i++;
	}
	number[i] = '\0';
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	size_t	isneg;
	size_t	digit;
	size_t	i;

	isneg = ft_findneg(n);
	digit = ft_finddigit(n);
	number = malloc(sizeof(char) * (digit + 1 + isneg));
	if (!number)
		return (NULL);
	if (n == -2147483648)
	{
		ft_intmin(number);
		return (number);
	}
	if (isneg == 1)
	{
		number[0] = '-';
		n *= -1;
	}
	i = digit + isneg;
	number[i] = '\0';
	i--;
	ft_fitmalloc(number, i, n);
	return (number);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("%s\n", ft_itoa(-321354363));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(12));
// 	printf("%s\n", ft_itoa(-2147483648));
// }