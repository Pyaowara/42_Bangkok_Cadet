/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:36:01 by patyaowa          #+#    #+#             */
/*   Updated: 2024/02/06 18:08:15 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list *args, char type)
{
	int	print_len;

	print_len = 0;
	if (type == 'c')
		print_len += ft_putchar(va_arg(*args, int));
	if (type == 's')
		print_len += ft_putstr(va_arg(*args, char *));
	if (type == 'p')
		print_len += ft_putptr(va_arg(*args, size_t));
	if (type == 'd' || type == 'i')
		print_len += ft_putnbr(va_arg(*args, int));
	if (type == 'u')
		print_len += ft_putunbr(va_arg(*args, unsigned int));
	if (type == 'x' || type == 'X')
		print_len += ft_puthex(va_arg(*args, unsigned int), type);
	if (type == '%')
		print_len += ft_putchar('%');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	len;
	
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len += ft_check(&args, *str);
			str++;
		}
		else
		{
			len += ft_putchar(*str);
			str++;
		}
	}
	va_end(args);
	return (len);
}