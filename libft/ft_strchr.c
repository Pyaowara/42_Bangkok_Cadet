/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patyaowa <patyaowa@student.42Bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:04:48 by patyaowa          #+#    #+#             */
/*   Updated: 2023/09/27 12:32:35 by patyaowa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	cha;

	cha = (unsigned char)c;
	str = (char *)s;
	while (*str)
	{
		if (*str == cha)
		{
			return (str);
		}
		str++;
	}
	if (cha == '\0')
		return (str);
	return (NULL);
}

// int	main()
// {
// 	const	char *s = "Hello World";
// 	char	*r = ft_strchr(s, 'o');
// 	ft_putstr_fd(r, 1);
// }