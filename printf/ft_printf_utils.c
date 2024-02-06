/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:36:01 by patyaowa          #+#    #+#             */
/*   Updated: 2024/02/06 20:02:50 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	if (c >= 0)
		write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	if (s)
		return (write(1, s, ft_strlen(s)));
	write(1, "(null)", 6);
	return (6);
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
	// if (type == 'p')
	// 	write()
	// if (!n)
	// 	write(1, "0", 1);
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
