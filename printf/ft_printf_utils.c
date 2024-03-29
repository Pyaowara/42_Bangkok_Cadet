/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:36:01 by patyaowa          #+#    #+#             */
/*   Updated: 2024/02/08 17:26:00 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, char *base)
{
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n == 0)
		return (ft_putchar('0'));
	return (ft_putnbr_base(n, base));
}

int	ft_putnbr_base(int n, char *base)
{
	int	base_size;
	int	nbr[100];
	int	i;
	int	k;

	i = 0;
	k = 0;
	base_size = ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		k++;
		ft_putchar('-');
	}
	while (n)
	{
		nbr[i] = n % base_size;
		n /= base_size;
		i++;
		k++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr[i]]);
	return (k);
}

int	ft_putstnbr_base(size_t n, char *base)
{
	int	base_size;
	int	nbr[100];
	int	i;
	int	k;

	i = 0;
	k = 0;
	base_size = ft_strlen(base);
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	while (n)
	{
		nbr[i] = n % base_size;
		n /= base_size;
		i++;
		k++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr[i]]);
	return (k);
}

int	ft_putptr(size_t n, char *base)
{
	if (!n)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	return (ft_putstnbr_base(n, base) + 2);
}
