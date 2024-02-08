/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:06 by patyaowa          #+#    #+#             */
/*   Updated: 2024/02/08 15:50:45 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_check(va_list *args, char type);
int	ft_strlen(const char *s);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int ft_putnbr(int n, char *base);
int	ft_putnbr_base(int n, char *base);
int	ft_putptr(size_t n, char *base);
int	ft_putstnbr_base(size_t n, char *base);
#endif