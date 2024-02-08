/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:36:01 by patyaowa          #+#    #+#             */
/*   Updated: 2024/02/08 15:50:59 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list *args, char type)
{
	int	print_len;

	print_len = 0;
	if (type == 'c')
		print_len += ft_putchar(va_arg(*args, int));
	else if (type == 's')
		print_len += ft_putstr(va_arg(*args, char *));
	else if (type == 'p')
		print_len += ft_putptr(va_arg(*args, size_t), "0123456789abcdef");
	else if (type == 'd' || type == 'i')
		print_len += ft_putnbr(va_arg(*args, int), "0123456789");
	else if (type == 'u')
		print_len += ft_putstnbr_base(va_arg(*args, unsigned int), "0123456789");
	else if (type == 'x')
		print_len += ft_putstnbr_base(va_arg(*args, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		print_len += ft_putstnbr_base(va_arg(*args, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		print_len += ft_putchar('%');
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

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

// #include <stdio.h>

// int	main(){
// 	char * str = "Hello";
// 	unsigned int dstr = 123211;
// 	int i = 0;
// 	i = printf("Hello World\n");
// 	printf("%d\n", i);
// 	i = ft_printf("Hello World\n");
// 	printf("%d\n", i);
// 	i = printf("%c\n", 'h');
// 	printf("%d\n", i);
// 	i = ft_printf("%c\n", 'h');
// 	printf("%d\n", i);
// 	i = printf("%s\n", str);
// 	printf("%d\n", i);
// 	i = ft_printf("%s\n", str);
// 	printf("%d\n", i);
// 	i = printf("%p\n", str);
// 	printf("%d\n", i);
// 	i = ft_printf("%p\n", str);
// 	printf("%d\n", i);
// 	i = printf("%d\n", dstr);
// 	printf("%d\n", i);
// 	i = ft_printf("%d\n", dstr);
// 	printf("%d\n", i);
// 	i = printf("%u\n", dstr);
// 	printf("%d\n", i);
// 	i = ft_printf("%u\n", dstr);
// 	printf("%d\n", i);
// 	i = printf("%x\n", dstr);
// 	printf("%d\n", i);
// 	i = ft_printf("%x\n", dstr);
// 	printf("%d\n", i);
// 	i = printf("%X\n", dstr);
// 	printf("%d\n", i);
// 	i = ft_printf("%X\n", dstr);
// 	printf("%d\n", i);
// }