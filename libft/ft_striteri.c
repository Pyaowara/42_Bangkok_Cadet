/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:57:08 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 12:47:24 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

// void	ft_put_str(unsigned int i, char *s)
// {
// 	ft_putnbr_fd(i, 1);
// 	ft_putstr_fd(s, 1);
// 	ft_putchar_fd('\n', 1);
// }

// int	main()
// {
// 	char	*s = "Hello World";
// 	ft_striteri(s, ft_put_str);
// }